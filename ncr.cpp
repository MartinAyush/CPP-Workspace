#include<iostream>
using namespace std;

// nCr = n! / (n-r)! * r!

int fact(int n){
    int sum=1;
    for (int i=2;i<=n;i++){
        sum *= i;
    }
    return sum;
}

int main() {
    int n, r, ans;
    cout << "Enter value of c: ";
    cin >> n;
    cout << "Enter value of r: ";
    cin >> r; 

    ans = fact(n) / (fact(n-r) * fact(r));

    cout << "Factorial is : " << ans << endl;


    return 0;
}