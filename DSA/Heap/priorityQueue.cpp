#include<bits/stdc++.h> 
using namespace std;

// priority_queue<int> pp -> creates Max heap
// priority_queue<int, vector<int>, greater<int> > pp -> Creates Min heap

void print(priority_queue<int, vector<int>, greater<int> > pp){
    while(pp.empty() != true){
        cout << pp.top() << " ";
        pp.pop();
    }
    cout << '\n';
}

int main() {
    priority_queue<int> pq;
    priority_queue<int, vector<int>, greater<int> > pp;
    
    pq.push(10);
    pq.push(20);
    pq.push(5);
    pq.push(89);
    pq.push(33);

    pp.push(39);
    pp.push(35);
    pp.push(30);
    pp.push(36);
    
    print(pq);
    print(pp);
    
    pq.swap(pp);
    
    print(pq);
    print(pp);
    
    return 0;
}