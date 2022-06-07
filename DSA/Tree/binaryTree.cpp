#include <bits/stdc++.h>
using namespace std;

// searching || deleting || inserting -> O(n)

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

// LEFT -> HEAD -> RIGHT
void inOrder(Node *head)
{
    if (head != NULL)
    {
        inOrder(head->left);
        cout << head->data << " ";
        inOrder(head->right);
    }
}

void iterativeInOrder(Node *head)
{
    if (head == NULL)
    {
        return;
    }
    stack<Node *> s;
    Node *curr = head;
    while (curr != NULL || s.empty() == false)
    {
        while (curr != NULL)
        {
            s.push(curr);
            curr = curr->left;
        }
        curr = s.top();
        s.pop();
        cout << curr->data << " ";
        curr = curr->right;
    }
}

// HEAD -> LEFT -> RIGHT
void preOrder(Node *head)
{
    if (head != NULL)
    {
        cout << head->data << " ";
        preOrder(head->left);
        preOrder(head->right);
    }
}

void iterativePreOrder(Node *head)
{
    if (head == NULL)
    {
        return;
    }
    stack<Node *> s;
    s.push(head);
    while (s.empty() == false)
    {
        Node *curr = s.top();
        s.pop();
        cout << curr->data << " ";
        if (curr->right != NULL)
        {
            s.push(curr->right);
        }
        if (curr->left != NULL)
        {
            s.push(curr->left);
        }
    }
}

// LEFT -> RIGHT -> ROOT
void postOrder(Node *head)
{
    if (head != NULL)
    {
        postOrder(head->left);
        postOrder(head->right);
        cout << head->data << " ";
    }
}

int sizeBT(Node *head)
{
    if (head == NULL)
    {
        return 0;
    }
    return 1 + sizeBT(head->left) + sizeBT(head->right);
}

int maxBT(Node *head)
{
    if (head == NULL)
    {
        return INT_MIN;
    }
    else
    {
        return max(head->data, max(maxBT(head->left), maxBT(head->right)));
    }
}

int minBT(Node *head)
{
    if (head == NULL)
    {
        return INT_MAX;
    }
    else
    {
        return min(head->data, min(minBT(head->left), minBT(head->right)));
    }
}

int heightBT(Node *head)
{
    if (head == NULL)
    {
        return 0;
    }
    else
    {
        return max(heightBT(head->left), heightBT(head->right)) + 1;
    }
}

int main()
{
    Node *head = new Node(10);
    head->left = new Node(20);
    head->right = new Node(30);
    head->right->left = new Node(40);
    head->right->right = new Node(50);
    // inOrder(head);
    // cout << '\n';
    // preOrder(head);
    // cout << '\n';
    // postOrder(head);
    // cout << sizeBT(head) << '\n';
    // cout << maxBT(head) << '\n';
    // cout << minBT(head) << '\n';
    // cout << heightBT(head) << '\n';
    // iterativeInOrder(head);
    iterativePreOrder(head);
    return 0;
}