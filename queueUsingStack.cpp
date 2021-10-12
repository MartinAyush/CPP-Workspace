#include<bits/stdc++.h>
using namespace std;

class Queue1{
    stack<int> s1;
    stack<int> s2;
    int N;
    public:
        Queue1(){
            N = 0;
        }
        void push(int x){
            s1.push(x);
            N++;
        }
        int pop(){
            if(s1.empty() && s2.empty()){
                return -1;
            }
            if(s2.empty()){
                while(!s1.empty()){
                    s2.push(s1.top());
                    s1.pop();
                }
            }
            int topval = s2.top();
            s2.pop();
            N--;
            return topval;
        }
        int size() {
            return N;
        }
        int peek(){
            if(s1.empty() && s2.empty()){
                return -1;
            }
            if(s2.empty()){
                while(!s1.empty()){
                    s2.push(s1.top());
                    s1.pop();
                }
            }
            return s2.top();
        }

};

int main() {
    Queue1 ss;
    ss.push(10);
    ss.push(20);
    ss.push(30);
    ss.push(40);
    cout << ss.size() << endl;
    cout << ss.pop() << endl;
    cout << ss.peek() << endl;
    cout << ss.pop() << endl;
    cout << ss.size() << endl;
    return 0;
}