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

void insertAtHead(Node* &head, int val){
    Node* n = new Node(val);
    if(head == NULL){
        n -> next = n;
        head = n;
        return;
    }
    Node* temp = head;
    do{
        temp = temp -> next;
    }while(temp != head);
    temp -> next = n;
    n -> next = head;
    head = n;
}

void insertAtTail(Node* &head, int val){
    if(head == NULL){
        insertAtHead(head, val);
        return;
    }
    Node* n = new Node(val);
    Node* temp = head;
    while(temp -> next != head){
        temp = temp -> next;
    }
    temp -> next = n;
    n -> next = head;
    return;
}

void deleteHead(Node* &head){
    Node* temp = head;
    while(temp -> next != head){
        temp = temp -> next;
    }
    Node* toDelete = temp -> next;
    temp -> next = head -> next;
    head = head -> next;
    delete toDelete;
}

void deleteNode(Node* &head, int pos){
    if(pos <= 1){
        deleteHead(head);
        return;
    }
    Node* temp = head;
    int count = 1;
    while(temp -> next != head && count < pos-1){
        temp = temp -> next;
        count++;
    }
    Node* toDelete = temp -> next;
    temp -> next = temp -> next -> next;
    delete toDelete;
}

void printLL(Node* head){
    Node* temp = head;
    do{
        cout << temp -> data << "->";
        temp = temp -> next;
    }while(temp != head);
    cout << "HEAD" << endl;
}

int main() {
    Node* head = NULL;
    insertAtTail(head, 10);
    insertAtTail(head, 20);
    insertAtTail(head, 30);
    insertAtTail(head, 40);
    insertAtTail(head, 50);
    insertAtTail(head, 60);
    printLL(head);
    deleteNode(head, 1);
    printLL(head);
    return 0;
}