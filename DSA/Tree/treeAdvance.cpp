#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int x)
    {
        data = x;
        left = right = NULL;
    }
};

void levelOrder1(Node *head)
{
    queue<Node *> q;
    q.push(head);
    q.push(NULL);
    while (q.size() > 1)
    {
        Node *x = q.front();
        q.pop();
        if (x == NULL)
        {
            cout << '\n';
            q.push(NULL);
            continue;
        }
        cout << x->data << " ";
        if (x->left != NULL)
        {
            q.push(x->left);
        }
        if (x->right != NULL)
        {
            q.push(x->right);
        }
    }
}

// Best
void levelOrder2(Node *head)
{
    queue<Node *> q;
    q.push(head);
    while (!q.empty())
    {
        int n = q.size();
        for (int i = 0; i < n; i++)
        {
            Node *x = q.front();
            q.pop();
            cout << x->data << " ";
            if (x->left != NULL)
            {
                q.push(x->left);
            }
            if (x->right != NULL)
            {
                q.push(x->right);
            }
        }
        cout << '\n';
    }
}

// Print kth level of the tree
// every element enters in the queue once
// loop runs for the the each level
// o(n)
void kThLevelOfTreeIterative(Node *head, int k)
{
    queue<Node *> q;
    q.push(head);
    int tt = 0;
    while (!q.empty())
    {
        int n = q.size();
        for (int i = 0; i < n; i++)
        {
            Node *x = q.front();
            q.pop();
            if (tt == k)
            {
                cout << x->data << " ";
            }
            if (x->left != NULL)
            {
                q.push(x->left);
            }
            if (x->right != NULL)
            {
                q.push(x->right);
            }
        }
        tt++;
    }
}

// Better
// O(h) where h is the height of the binary tree
void kThLevelOfTreeRecursive(Node *head, int k)
{
    if (head == NULL)
    {
        return;
    }
    if (k == 0)
    {
        cout << head->data << " ";
    }
    else
    {
        kThLevelOfTreeRecursive(head->left, k - 1);
        kThLevelOfTreeRecursive(head->right, k - 1);
    }
    return;
}

void leftView(Node *head)
{
    if (head == NULL)
    {
        return;
    }
    queue<Node *> q;
    q.push(head);
    while (!q.empty())
    {
        int n = q.size();
        for (int i = 0; i < n; i++)
        {
            Node *x = q.front();
            q.pop();
            if (i == 0)
            { // left -> right === 0 -> n-1
                cout << x->data << " ";
            }
            if (x->left != NULL)
            {
                q.push(x->left);
            }
            if (x->right != NULL)
            {
                q.push(x->right);
            }
        }
        // cout << '\n';
    }
}

void rightView(Node *head)
{
    if (head == NULL)
    {
        return;
    }
    queue<Node *> q;
    q.push(head);
    while (!q.empty())
    {
        int n = q.size();
        for (int i = 0; i < n; i++)
        {
            Node *x = q.front();
            q.pop();
            if (i == n - 1)
            {
                cout << x->data << " ";
            }
            if (x->left != NULL)
            {
                q.push(x->left);
            }
            if (x->right != NULL)
            {
                q.push(x->right);
            }
        }
    }
}

bool childrenSumProperty(Node *head)
{
    if (head == NULL)
    {
        return true;
    }
    if (head->left == NULL && head->right == NULL)
    {
        return true;
    }
    int sum = 0;
    if (head->left != NULL)
    {
        sum += head->left->data;
    }
    if (head->right != NULL)
    {
        sum += head->right->data;
    }
    return ((head->data == sum) && childrenSumProperty(head->left) && childrenSumProperty(head->right));
}

// returns -1 if not balanced else height of tree
int isBalanced(Node *head)
{
    if (head == NULL)
    {
        return 0;
    }
    int leftHeight = isBalanced(head->left);
    if (leftHeight == -1)
    {
        return -1;
    }
    int rightHeight = isBalanced(head->right);
    if (rightHeight == -1)
    {
        return -1;
    }
    if (abs(leftHeight - rightHeight) > 1)
    {
        return -1;
    }
    return max(leftHeight, rightHeight) + 1;
}

int maxWidthOfTree(Node *head)
{
    if (head == NULL)
    {
        return 0;
    }
    queue<Node *> q;
    q.push(head);
    int size = 0;
    while (!q.empty())
    {
        int n = q.size();
        size = max(size, n);
        for (int i = 0; i < n; i++)
        {
            Node *x = q.front();
            q.pop();
            if (x->left != NULL)
            {
                q.push(x->left);
            }
            if (x->right != NULL)
            {
                q.push(x->right);
            }
        }
    }
    return size;
}

// convert binary tree to doubly linked list
void bToDLL(Node *head, Node *&root, Node *&prev, int &flag)
{
    if (head == NULL)
    {
        return;
    }
    // first go left deep
    bToDLL(head->left, root, prev, flag);
    if (flag == 0)
    { // if DLL is empty
        flag = 1;
        root = head; // make new head of DLL
        prev = head; // prev also points to the head in starting
    }
    else
    {                       // add data through prev
        prev->right = head; // right is next && left is prev in DLL
        prev->right->left = prev;
        prev = prev->right;
    }
    bToDLL(head->right, root, prev, flag);
}

Node *binaryToDLL(Node *head)
{
    if (head == NULL)
    {
        return NULL;
    }
    Node *root = NULL;
    Node *prev = NULL;
    int flag = 0;
    bToDLL(head, root, prev, flag);
    return root;
}

// O(n)
void spiralForm(Node *head)
{
    queue<Node *> q;
    q.push(head);
    int flag = true;
    vector<int> v;
    while (!q.empty())
    {
        int n = q.size();
        for (int i = 0; i < n; i++)
        {
            Node *x = q.front();
            q.pop();
            v.push_back(x->data);
            if (x->left != NULL)
            {
                q.push(x->left);
            }
            if (x->right != NULL)
            {
                q.push(x->right);
            }
        }
        if (flag)
        {
            flag = false;
            for (int i = 0; i < v.size(); i++)
            {
                cout << v[i] << " ";
            }
            v.clear();
        }
        else
        {
            flag = true;
            for (int i = v.size() - 1; i >= 0; i--)
            {
                cout << v[i] << " ";
            }
            v.clear();
        }
    }
}

int diameterOfTree(Node *head, int &diameter)
{
    if (head == NULL)
    {
        return 0;
    }
    int leftHeight = diameterOfTree(head->left);
    int rightHeight = diameterOfTree(head->right);
    diameter = max(diameter, 1 + leftHeight + rightHeight);
    return 1 + max(leftHeight, rightHeight);
}

// int countNodes(Node* head){
//     if(head == NULL){
//         return 0;
//     }
//     return 1 + countNodes(head -> left) + countNodes(head -> right);
// }

int countNodes(Node *head)
{
    int lh = 0, rh = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        lh++;
        temp = temp->left;
    }
    temp = head;
    while (temp != NULL)
    {
        rh++;
        temp = temp->right;
    }
    if (lh == rh)
    {
        return pow(2, lh) - 1;
    }
    return 1 + countNodes(head->left) + countNodes(head->right);
}

// pre Order = root left right
void serialize(Node *head, vector<int> &toArr)
{
    if (head == NULL)
    {
        toArr.push_back(-1);
        return;
    }
    toArr.push_back(head->data);
    serialize(head->left, toArr);
    serialize(head->right, toArr);
}

Node *deSerialize(vector<int> &a, int &index)
{
    if (index == a.size())
    {
        return NULL;
    }
    int x = a[index];
    index++;
    if (x == -1)
    {
        return NULL;
    }
    Node *head = new Node(x);
    head->left = deSerialize(a, index);
    head->right = deSerialize(a, index);
    return head;
}

void inOrder(Node *head)
{
    if (head != NULL)
    {
        inOrder(head->left);
        cout << head->data << " ";
        inOrder(head->right);
    }
}

int main()
{

    // Node* head = new Node(10);
    // head -> left = new Node(20);
    // head -> right = new Node(30);
    // head -> right -> left = new Node(40);
    // head -> right -> right = new Node(50);
    // levelOrder2(head);

    // Node* head = new Node(10);
    // head -> left = new Node(20);
    // head -> right = new Node(30);
    // head -> left -> left = new Node(40);
    // head -> left -> right = new Node(50);
    // head -> right -> right = new Node(70);
    // recursive(head, 2);

    // Node* head = new Node(10);
    // head -> left = new Node(20);
    // head -> right = new Node(30);
    // head -> left -> left = new Node(40);
    // head -> left -> right = new Node(50);
    // head -> right -> right = new Node(60);
    // leftView(head);
    // rightView(head);

    // Node* head = new Node(20);
    // head -> left = new Node(8);
    // head -> right = new Node(12);
    // head -> left -> left = new Node(3);
    // head -> left -> right = new Node(5);
    // Node* head = new Node(3);
    // head -> left = new Node(1);
    // head -> right = new Node(2);
    // head -> right -> left = new Node(1);
    // head -> right -> right = new Node(2);
    // childrenSumProperty(head);

    // Node* head = new Node(18);
    // head -> left = new Node(4);
    // head -> right = new Node(20);
    // head -> right -> left = new Node(13);
    // head -> right -> right = new Node(70);
    // Node* head = new Node(3);
    // head -> left = new Node(4);
    // head -> left -> left = new Node(5);
    // checkBalance(head);
    // cout << isBalanced(head);

    // Node* head = new Node(10);
    // head -> left = new Node(20);
    // head -> right = new Node(30);
    // head -> left -> left = new Node(40);
    // head -> right -> left = new Node(50);
    // head -> right -> right = new Node(60);
    // head -> left -> left -> left = new Node(80);
    // cout << maxWidthOfTree(head);

    // Node* head = new Node(10);
    // head -> left = new Node(5);
    // head -> right = new Node(20);
    // head -> left -> left = new Node(6);
    // head -> left -> right = new Node(9);
    // head -> right -> left = new Node(30);
    // head -> right -> right = new Node(35);
    // binaryToDLL(head);

    // Node* head = new Node(10);
    // head -> left = new Node(20);
    // head -> right = new Node(30);
    // head -> right -> left = new Node(40);
    // head -> right -> right = new Node(50);
    // head -> right -> left -> left = new Node(60);
    // head -> right -> left -> right = new Node(70);
    // head -> right -> right -> right = new Node(80);
    // spiralForm(head);

    // Node* head = new Node(10);
    // head -> left = new Node(20);
    // head -> right = new Node(30);
    // head -> right -> left = new Node(40);
    // head -> right -> right = new Node(50);
    // head -> right -> left -> left = new Node(60);
    // int diameter = 0;
    // diameterOfTree(head, diameter);
    // cout << diameter << '\n';

    // Node* head = new Node(10);
    // head -> left = new Node(20);
    // head -> right = new Node(30);
    // head -> right -> left = new Node(40);
    // head -> right -> right = new Node(50);
    // head -> right -> left -> left = new Node(60);
    // head -> right -> right -> left = new Node(70);
    // head -> right -> right -> right = new Node(80);
    // lowestCommonAncestor(head);

    // Node* head = new Node(10);
    // head -> left = new Node(20);
    // head -> right = new Node(30);
    // head -> left -> left = new Node(40);
    // head -> left -> right = new Node(50);
    // cout << countNodes(head);

    // Node* head = new Node(10);
    // head -> left = new Node(20);
    // head -> right = new Node(30);
    // head -> left -> left = new Node(40);
    // head -> left -> right = new Node(50);
    // head -> right -> right = new Node(60);
    // vector<int> toArr;
    // serialize(head, toArr);
    // int index = 0;
    // Node* head1 = deSerialize(toArr, index);
    // inOrder(head1);

    return 0;
}