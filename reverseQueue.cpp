#include<bits/stdc++.h>
using namespace std;

// reverse queue

// using stack;
void iterative(queue<int> &q){
    stack<int> s;
    while(!q.empty()){
        s.push(q.front());
        q.pop();
    }
    while(!s.empty()){
        q.push(s.top());
        s.pop();
    }
}

void recursive(queue<int> &q){
    if(q.empty()){
        return;
    }
    int x = q.front();
    q.pop();
    recursive(q); //remove first element 
    q.push(x);      // then add to the last
}

int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    recursive(q);

    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }


    return 0;
}