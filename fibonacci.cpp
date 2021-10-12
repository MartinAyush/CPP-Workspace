#include<bits/stdc++.h>
using namespace std;

//Fibonacci series
// 0 1 1 2 3 5 8 13
// Third no is sum of previous two numbers

// using golden ratio
// int fib(int n){
//     vector<int> F = {0, 1, 1, 2, 3, 5, }
//     if (n < 6){
//         return F[n];
//     }
// }

// void formula(int n){
//     double phi = (1 + sqrt(5))/2;
//     int ans = round(n-1 * phi);
//     cout << ans;
// }

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num == 1){
        cout << "0\n";
    }else if (num == 2){
        cout << "0 1\n";
    }else{
        long long a=0,b=1,c=3;
        long long sum;

        cout << a << " " << b << " ";

        while(c <= num){
            sum = a + b;
            cout << sum << " ";
            a = b;
            b = sum;
            c++;
        }

    }

    return 0;
}
