#include <bits/stdc++.h>
using namespace std;

/*
        5
      /   \
    4       6
*/

class Node
{
public:
    int data;
    Node *left;  // smaller than node
    Node *right; // greater than node
    Node(int x)
    {
        data = x;
        left = right = NULL;
    }
};

Node *insert(Node *head, int x)
{
    Node *n = new Node(x);
    Node *parent = NULL;
    Node *curr = head;
    while (curr != NULL)
    {
        parent = curr;
        if (curr->data < x)
        {
            curr = curr->right;
        }
        else if (curr->data > x)
        {
            curr = curr->left;
        }
        else
        {
            return head;
        }
    }
    if (parent == NULL)
    { // first node
        return n;
    }
    else if (parent->data < x)
    {
        parent->right = n;
    }
    else
    {
        parent->left = n;
    }
    return head;
}

void print(Node *head)
{
    if (head != NULL)
    {
        print(head->left);
        cout << head->data << " ";
        print(head->right);
    }
}

// ceil upperbound
// floor lowerbound

int ceilBST(Node *head, int x)
{
    if (head == NULL)
    {
        return -1;
    }
    int ans = -1;
    while (head != NULL)
    {
        if (head->data == x)
        {
            return head->data;
        }
        else if (head->data < x)
        {
            head = head->right;
        }
        else
        {
            ans = head->data;
            head = head->left;
        }
    }
    return ans;
}

int floorBST(Node *head, int x)
{
    if (head == NULL)
    {
        return -1;
    }
    int ans = -1;
    while (head != NULL)
    {
        if (head->data == x)
        {
            return head->data;
        }
        else if (head->data > x)
        {
            head = head->left;
        }
        else
        {
            ans = head->data;
            head = head->right;
        }
    }
    return ans;
}

// O(n*log(n))
void findLowerBound()
{
    vector<int> a = {2, 8, 30, 15, 25, 12};
    set<int> s; // set is made using red black tree
    s.insert(a[0]);
    cout << -1 << " ";
    for (int i = 1; i < a.size(); i++)
    {
        auto x = s.lower_bound(a[i]);
        if (x != s.end())
        {
            cout << *(x) << " ";
        }
        else
        {
            cout << -1 << " ";
        }
        s.insert(a[i]);
    }
}

void printKth(Node *head, int k, int &count)
{
    if (head != NULL)
    {
        printKth(head->left, k, count);
        count++;
        if (count == k)
        {
            cout << head->data << " ";
        }
        printKth(head->right, k, count);
    }
}

bool checkBST(Node *head, int low, int high)
{
    if (head == NULL)
    {
        return true;
    }
    return head->data > low && head->data < high && checkBST(head->left, low, head->data) && checkBST(head->right, head->data, high);
}

void inOrder(Node *head, vector<int> &trav)
{
    if (head != NULL)
    {
        inOrder(head->left, trav);
        trav.push_back(head->data);
        inOrder(head->right, trav);
    }
}

void fixTwoNodesBST(Node *head, Node *&low, Node *&high, Node *&prev)
{ // after this function swap low with high
    fixTwoNodesBST(head->left, low, high, prev);
    if (prev != NULL && head->data < prev->data)
    {
        if (low == NULL)
        {
            low = prev;
        }
        high = head;
    }
    prev = head;
    fixTwoNodesBST(head->right, low, high, prev);
}

// Function to find the pair with given sum is persent in the BST
bool pairSum(Node *head, int sum, unordered_set<int> &s)
{
    if (head == NULL)
    {
        return false;
    }
    if (check(head->left, sum, s))
    {
        return true;
    }
    if (s.find(sum - head->data) != s.end())
    {
        return true;
    }
    s.insert(head->data);
    return check(head->right, sum, s);
}

// Virtical sum of binary seach tree
// O(n*log(n))
void HDistance(Node *head, int hd, map<int, int> &m)
{ // hd = horizontal distance
    if (head == NULL)
    {
        return;
    }
    check(head->left, hd - 1, m);
    m[hd] += head->data;
    check(head->right, hd + 1, m);
}

void sumHDistance(Node *head)
{
    if (head == NULL)
    {
        return;
    }
    unordered_map<int, int> m;
    int vd = 0;
    HDistance(head, vd, m);
    for (auto x : m)
    {
        cout << x.second << " ";
    }
}

// vertical traversal
// do level order traversal
// store  and data in map
void vTravelBST(Node *head)
{
    map<int, vector<int>> m;
    queue<pair<Node *, int>> q;
    q.push({head, 0});
    while (!q.empty())
    {
        int n = q.size();
        for (int i = 0; i < n; i++)
        {
            auto x = q.front();
            q.pop();
            m[x.second].push_back(x.first->data);
            if (x.first->left != NULL)
            {
                q.push({x.first->left, x.second - 1});
            }
            if (x.first->right != NULL)
            {
                q.push({x.first->right, x.second + 1});
            }
        }
    }
    for (auto i : m)
    {
        for (auto x : i.second)
        {
            cout << x << " ";
        }
    }
}

// Top view of binary seach tree
void topView(Node *head)
{
    if (head == NULL)
    {
        return;
    }
    queue<pair<Node *, int>> q;
    map<int, int> m;
    q.push({head, 0});
    while (!q.empty())
    {
        int n = q.size();
        for (int i = 0; i < n; i++)
        {
            auto x = q.front();
            q.pop();
            if (m[x.second] == NULL)
            {
                m[x.second] = x.first->data;
            }
            if (x.first->left != NULL)
            {
                q.push({x.first->left, x.second - 1});
            }
            if (x.first->second != NULL)
            {
                q.push({x.first->right, x.second + 1});
            }
        }
    }
    for (auto i : m)
    {
        cout << i.second << " ";
    }
}

int main()
{
    Node *head = NULL;

    Node *head2 = insert(head, 10);
    Node *head3 = insert(head2, 20);
    Node *head4 = insert(head3, 30);
    Node *head5 = insert(head4, 40);
    Node *head6 = insert(head5, 50);

    topView(head6);

    return 0;
}