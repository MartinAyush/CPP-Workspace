#include<bits/stdc++.h>
using namespace std;

// Decimal to binary
// (343)base10 to (1010001010)base2

int decimalToBinary(int n) { 
    int x = 1; 
    int sum = 0;
    while (x <= n){
        x *= 2; 
    }
    x /= 2; 
    while(x > 0){
        int rem = n/x;
        n -= rem * x; 
        x /= 2;
        sum = (sum * 10) + rem;
    }
    return sum;
}

int main() {
    int n;
    cout << "Enter number in decimal : ";
    cin >> n;
    cout << decimalToBinary(n) << endl;
    return 0;
}