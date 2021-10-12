#include<iostream>

using namespace std;

// Reverse a number
// 153 -> 351

int main() {

    int n,rev;
    cout << "Enter any number to be reversed: ";
    cin >> n;

    while(n>0){
        int rem = n % 10;
        rev = rev*10 + rem;
        n /= 10;
    }

    cout << "Reverse is : "  << rev << endl;

    return 0;
}
