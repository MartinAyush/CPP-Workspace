#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
        Node(int x){
            data = x;
            next = NULL;
        }
};

void insertNode(Node* &head, int val){
    Node* n = new Node(val);
    if(head == NULL){
        head = n;
        return;
    }
    Node* temp = head;
    while(temp -> next != NULL){
        temp = temp -> next;
    }
    temp -> next = n;
    return;
}

Node* mergeTwoSortedLL(Node* head1, Node* head2){
    Node* dn = new Node(-1);
    Node* ptr1 = head1;
    Node* ptr2 = head2;
    Node* ptr3 = dn;
    while(ptr1 != NULL && ptr2 != NULL){
        if(ptr1 -> data < ptr2 -> data){
            ptr3 -> next = ptr1;
            ptr1 = ptr1 -> next;
        }else{
            ptr3 -> next = ptr2;
            ptr2 = ptr2 -> next;
        }
        ptr3 = ptr3 -> next;
    }
    while(ptr1 != NULL){
        ptr3 -> next = ptr1;
        ptr3 = ptr3 -> next;
        ptr1 = ptr1 -> next;
    }
    while(ptr2 != NULL){
        ptr3 -> next = ptr2;
        ptr2 = ptr2 -> next;
        ptr3 = ptr3 -> next;
    }
    return dn -> next;
}

void printLL(Node* head){
    while(head != NULL){
        cout << head -> data << " ";
        head = head -> next;
    }
    cout << endl;
}

int main(){
    Node* head1 = NULL;
    insertNode(head1, 1);
    insertNode(head1, 4);
    insertNode(head1, 5);
    insertNode(head1, 7);
    printLL(head1);
    Node* head2 = NULL;
    insertNode(head2, 2);
    insertNode(head2, 3);
    insertNode(head2, 6);
    // insertNode(head2, 40);
    printLL(head2);
    Node* newHead = mergeTwoSortedLL(head1, head2);
    printLL(newHead);
    return 0;
}