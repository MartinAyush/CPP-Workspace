#include<bits/stdc++.h>
using namespace std;

class Deque1{
    deque<int> d;
    public:
        void insertMin(int x){
            d.push_front(x);
        }
        void insertMax(int x){
            d.push_back(x);
        }
        int getMin(){
            return d.front();
        }
        int getMax(){
            return d.back();
        }
        void removeMin(){
            d.pop_front();
        }
        void removeMax(){
            d.pop_back();
        }
};

int main() {
    // Deque1 dd;
    // dd.insertMin(5);
    // dd.insertMax(10);
    // dd.insertMin(3);
    // dd.insertMax(15);
    // dd.insertMin(2);
    // cout << dd.getMin() << '\n';
    // cout << dd.getMax() << '\n';
    // dd.insertMin(1);
    // cout << dd.getMin() << '\n';
    // dd.insertMax(10);
    // cout << dd.getMax() << '\n';

    long long int x = 1;
    long y = 2;
    int z = 34;
    cout << sizeof(x) << '\n';
    cout << sizeof(y) << '\n';
    cout << sizeof(z) << '\n';



    return 0;
}