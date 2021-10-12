#include<bits/stdc++.h>
using namespace std;

class Node{
    public: 
        int data;
        Node* next;
        Node* prev;
        Node(int x){
            data = x;
            next = prev = NULL;        
        }
};

void insertAtHead(Node* &head, int data){
    Node* n = new Node(data);
    if(head == NULL){
        head = n;
        return;
    }
    Node* temp = head;
    n -> next = temp;
    temp -> prev = n;
    head = n;
    return;
}

void insertAtTail(Node* &head, int val){
    Node* n = new Node(val);
    if(head == NULL){
        insertAtHead(head, val);
        return;
    }
    Node* temp = head;
    while(temp -> next != NULL){
        temp = temp -> next;
    }
    temp -> next = n;
    n -> prev = temp;
    return;
}

void deleteAtHead(Node* &head){
    if(head == NULL){
        return;
    }
    Node* temp = head;
    Node* toDelete = temp;
    head = head -> next;
    head -> prev = NULL;
    delete toDelete;
}

void deleteAtTail(Node* &head){
    Node* temp = head;
    while(temp -> next != NULL){
        temp = temp -> next;
    }
    Node* toDelete = temp;
    temp -> prev -> next = NULL;
    delete toDelete;
}

void deleteNode(Node* &head, int val){
    Node* temp = head;
    while(temp -> data != val){
        temp = temp -> next;
    }
    Node* toDelete = temp;
    temp -> prev -> next = temp -> next;
    if(temp -> next != NULL){
        temp -> next -> prev = temp -> prev;
    } 
    delete toDelete;
}

Node* reverseDLL(Node* head){
    Node* prev = NULL;
    Node* curr = head;
    while(curr != NULL){
        prev = curr -> prev;
        curr -> prev = curr -> next;
        curr -> next = prev;
        curr = curr -> prev;
    }
    return prev -> prev;
}

void printLL(Node* head){
    while(head != NULL){
        cout << head -> data << " ";
        head = head -> next;
    }
    cout << endl;
}

int main(){
    Node* head = NULL;
    
    insertAtTail(head, 10);
    insertAtTail(head, 20);
    insertAtTail(head, 30);
    insertAtTail(head, 40);
    insertAtTail(head, 50);
    insertAtTail(head, 60);
    printLL(head);
    
    // deleteNode(head, 40);
    // deleteHead(head);
    // deleteAtTail(head);
    // Node* newHead = reverseDLL(head);
    // printLL(newHead);
    Node* nn = reverseLL(head);
    printLL(nn);

    return 0;
}