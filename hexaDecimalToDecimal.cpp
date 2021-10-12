#include<iostream>
using namespace std;

// 1, 2, 3, 4, 5, 6, 7, 8, 9, A, B, C, D, E, F --> inp = string
// hexadecimal -- > (63)base16

// Wrong
int hexaToDecimal(int n){
    int sum=0,x=1;
    while (n > 0) {
        int rem = n % 10;
        sum += (rem * x);
        x *= 16;
        n /= 10;
    }
    return sum;
}

int main() {
    int n;
    cout << "Enter number in hexadecimal : ";
    cin >> n;
    cout << "Hexadecimal to decimal : " << hexaToDecimal(n) << endl;
    return 0;
}