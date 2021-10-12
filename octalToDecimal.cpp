#include<iostream>
using namespace std;

// Octal to Decimal
// (234234)8 --> x * 8*1234..n

int octalToDecimal(int x) {
    int sum=0, n=1;
    while(x > 0) {
        int rem = x % 10;
        sum += rem * n;
        n *= 8;
        x /= 10;
    }
    return sum;

}

int main() {
    int n;
    cout << "Enter no in Octal: ";
    cin >> n;
    cout << "Decimal representation: " << octalToDecimal(n) << endl;
    return 0;
}