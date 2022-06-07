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
    Node *left, *right;
    Node(int x)
    {
        data = x;
        left = right = NULL;
    }
};

Node *insertNode(Node *head, int x)
{
    if (head == NULL)
    {
        return new Node(x);
    }
    else if (head->data < x)
    {
        head->right = insertNode(head->right, x);
    }
    else if (head->data > x)
    {
        head->left = insertNode(head->left, x);
    }
    return head;
}

Node *insertNodeIter(Node *head, int x)
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
    {
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

void inOrder(Node *head)
{
    if (head != NULL)
    {
        inOrder(head->right);
        cout << head->data << " ";
        inOrder(head->left);
    }
}

Node *getSucc(Node *head)
{
    head = head->right;
    while (head != NULL && head->left != NULL)
    {
        head = head->left;
    }
    return head;
}
Node *deleteNode(Node *root, int x)
{

    if (root == NULL)
    {
        return root;
    }
    if (root->data < x)
    {
        root->right = deleteNode(root->right, x);
    }
    else if (root->data > x)
    {
        root->left = deleteNode(root->left, x);
    }
    else
    {
        if (root->left == NULL)
        {
            Node *temp = root->right;
            delete root;
            return temp;
        }
        else if (root->right == NULL)
        {
            Node *temp = root->left;
            delete root;
            return temp;
        }
        else
        {
            Node *succ = getSucc(root);
            root->data = succ->data;
            root->right = deleteNode(root->right, succ->data);
        }
    }
    return root;
}

int main()
{
    Node *head = new Node(10);
    Node *head2 = insertNode(head, 5);
    Node *head3 = insertNode(head2, 20);
    Node *head4 = insertNode(head3, 18);
    Node *head5 = insertNode(head4, 12);
    Node *head6 = insertNode(head5, 50);
    inOrder(head4);
    cout << '\n';
    Node *head7 = deleteNode(head, 10);
    inOrder(head7);
    return 0;
}