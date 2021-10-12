#include<bits/stdc++.h>
using namespace std;

void insertAtBottom(stack<int> &s, int val){
    if(s.empty()){
        s.push(val);
        return;
    }
    int topele = s.top();
    s.pop();
    insertAtBottom(s, val);
    s.push(topele);

}

void reverseStack(stack<int> &s){
    if(s.empty()){
        return;
    }
    int ele = s.top();
    s.pop();
    reverseStack(s);
    insertAtBottom(s, ele);
}

int main() {
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    reverseStack(s);
    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }
    return 0;
}