#include<bits/stdc++.h>
using namespace std;

// Stack using queue

class Stack1{
    queue<int> q1;
    queue<int> q2;
    int N;
    public:    
        Stack1(){
            N = 0;
        }
        void push(int x){
            q2.push(x);
            N++;
            while(!q1.empty()){
                q2.push(q1.front());
                q1.pop();
            }
            queue<int> temp = q2;
            q2 = q1;
            q1 = temp;
        }
        int pop(){
            int item = q1.front();
            q1.pop();
            N--;
            return item;
        }
        int size(){
            return N;
        }
        int peek(){
            return q1.front();
        }
};

int main(){
    Stack1 st1;
    st1.push(10);
    st1.push(20);
    st1.push(30);
    st1.push(40);
    st1.pop();
    cout << st1.peek() << endl;
    st1.pop();
    cout << st1.peek() << endl;
    cout << "Size " << st1.size() << endl;
    return 0;
}
