#include<iostream>
using namespace std;

// Armstrong Number
// 153 --> 1^3 + 5^3 + 3^3 = 153

int main() {

    int n;
    cout << "Enter any Number: ";
    cin >> n;

    int sum, originalSum=n;
    while(n > 0){
        int rem = n % 10;
        sum += rem * rem * rem;
        n = n / 10;
    }

    if (originalSum == sum){
        cout << "Armstrong Number.\n";
    }else{
        cout << "Not a Armstrong Number.\n";
    }


    return 0;
}
