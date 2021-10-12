#include<iostream>
#include<math.h>
using namespace std;

// 10011101010
// x * 2**n

int binaryToDecimal(int x){
    int sum=0, i=1;
    while (x > 0) {
        int rem = x % 10;
        sum += rem * i;
        i *= 2;
        x /= 10;
    }
    return sum;
}

int main() {
    int num;
    cout << "Enter in binary sysytem : ";
    cin >> num; 
    cout << "Binary to Decimal is : " << binaryToDecimal(num) << endl;
    return 0;
}