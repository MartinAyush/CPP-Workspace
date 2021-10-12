#include<iostream>
using namespace std;

// Sum of first n Natural numbers 

int sum(int n){
    int sum;
    sum = (n * (n+1)) / 2;
    return sum;
}

int main() {
    int x;
    cin >> x;
    cout << sum(x);
    return 0;
}