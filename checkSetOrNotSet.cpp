#include<bits/stdc++.h>
using namespace std;

// check if kth bit is set or not

void leftShift(int n, int k){
    if(n & (1<<(k-1))){
        cout << "Set" << '\n';
    }else{
        cout << "Not Set" << '\n';
    }
}

void rightShift(int n, int k){
    if((n>>(k-1)&1) == 1){
        cout << "Set" << '\n';
    }else{
        cout << "Not Set" << '\n';

    }
}



int main(){ 
    int n = 55;
    int k = 3;
    // leftShift(n, k);
    // rightShift(n, k);
    // brian(n);
    return 0;
}