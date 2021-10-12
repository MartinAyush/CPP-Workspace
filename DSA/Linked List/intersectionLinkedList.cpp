#include<bits/stdc++.h>
using namespace std;

// Y shaped linked list
// LinkList1 = 3->6->9->common
// LinkList2 = 10->common
// common = 15->30->NULL
// Output: 15

int intersectPoint(Node* head1, Node* head2)
{
    int l1 = 0;
    int l2 = 0;
    Node* temp1 = head1;
    Node* temp2 = head2;
    while(temp1 != NULL){
        temp1 = temp1 -> next;
        l1++;
    }
    while(temp2 != NULL){
        temp2 = temp2 -> next;
        l2++;
    }
    Node* ptr1;
    Node* ptr2;
    int d;
    if(l1>l2){
        d = l1 - l2;
        ptr1 = head1;
        ptr2 = head2;
    }else{
        d = l2 - l1;
        ptr1 = head2;
        ptr2 = head1;
    }
    while(d){
        ptr1 = ptr1 -> next;
        if(ptr1 == NULL){
            return -1;
        }
        d--;
    }
    while(ptr1 != NULL && ptr2 != NULL){
        if(ptr1 == ptr2){
            return ptr1 -> data;
        }
        ptr1 = ptr1 -> next;
        ptr2 = ptr2 -> next;
    }
    return -1;
}

int main(){


    return 0;
}