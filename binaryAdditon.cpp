#include<bits/stdc++.h>
using namespace std;

//1
//  1 1 0 0  
//  1 0 1 0
//1 0 1 1 0

// Algorithm
// case 1: if both a and b = 0       if(carry) => ans+=1
// case 2: if a=0 and b=1            if(carry) => ans+=0 and carry=1 || if(!carry) => ans+=1
// case 3: if a=1 and b=0            -----------------""------------
// case 4: if both a and b = 1       if(carry) => ans+=1 and carry=1 || if(!carry) => ans+=0 and carry=1

int reverse(int x) {
    int sum=0;
    while(x > 0) {
        int rem = x % 10;
        sum = (sum * 10) + rem;
        x /= 10;
    }
    return sum;
}

int binaryAdd(int a, int b) {
    int ans=0, carry=0;

    // Algorithm
    while(a>0 && b>0){
        if (a%2==0 && b%2==0){
            ans = (ans * 10) + carry;
            carry = 0;
        }else if ((a%2==0 && b%2==1) || (a%2==1 && b%2==0)) {
            if (carry == 1) {
                ans = (ans*10) + 0;
                carry = 1;
            }else{
                ans = (ans*10) + 1;
                carry = 0;
            }
        }else{
            ans = (ans*10) + carry;
            carry = 1;
        }
        a /= 10; 
        b /= 10;
    }

    // if a is left 
    while(a > 0) {
        if (carry == 1){
            if (a%2==1){
                ans = (ans*10) + 0;
                carry = 1;
            }else{
                ans = (ans*10) + 1;
                carry = 0;
            }
        }else{
            ans = (ans*10) + (a%2);
        }
        a /= 10;
    }

    // if b is left
    while (b > 0) {
        if (carry == 1) {
            if (b%2==1) {
                ans = (ans*10) + 0;
                carry = 1;
            }else{
                ans = (ans*10) + 1;
                carry = 0;
            }
        }else{
            ans = (ans*10) + (b%2);
        }
        b /= 10;
    }

    // if carry is left 
    if (carry == 1) {
        ans = (ans*10) + 1;
    }

    ans = reverse(ans);
    return ans;

}

int main() {
    int a, b;
    cout << "Enter first binary number : ";
    cin >> a;
    cout << "Enter second binary number : ";
    cin >> b;
    cout << "Binary Addition is : " << binaryAdd(a, b) << endl;
    return 0;
}