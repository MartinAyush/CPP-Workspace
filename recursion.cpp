#include<bits/stdc++.h>
using namespace std;


// Calling 
// recursive call
// returning 


// Sum of all numbers till n
// int sum(int n){
//     if (n == 0){
//         return 0;
//     }
//     int prevSum = sum(n - 1);
//     return (n + prevSum);
// }

// n raised to power p
// n=4 p=3 // 4**0 --> 4**1 --> 4**2 --> 4**3
// int power(int n, int p){
//     if (p == 0){
//         return 1;
//     }

//     int prevPower = power(n, p-1);
//     return (n * prevPower);
// }


// Factorial of a number using recursion
// fact(5) --> fact(4) --> fact(3) --> fact(2) --> fact(1)
//   120          24          6          2             1
// int fact(int n){
//     if (n == 1){
//         return 1;
//     }
//     int prevFact = fact(n-1);
//     return (n * prevFact); // 24 * 5
// }

// Fibonacci Number of nth Number
// fib(5) = fib(4) + fib(3)
// 

// int fib(int n){
//     if (n == 0){
//         return 0;
//     }
//     if (n == 1){
//         return 1;
//     }

//     int ans = fib(n-1) + fib(n-2);
//     return ans;
// }

// Tower of Hannoi
// void toi(int n, char start, char dest, char helper){
    // if (n == 0){
    //     return;
    // }
    // toi(n-1, start, helper, dest);
    // cout << "move from " << start << " to " << dest << endl;
    // toi(n-1, helper, dest, start); 
    // return;
// }

// void mazePath(int i, int j, int n, int m, string osf, int &ans){
//     if(i == n-1 && j == m-1){
//         cout << osf << '\n';
//         ans++;
//         return;
//     }
//     if(i >= n && j >= m){
//         return;
//     }
//     // Move Right
//     mazePath(i, j+1, n, m, osf+"R", ans);
//     // Move Downward
//     mazePath(i+1, j, n, m, osf+"D", ans);
//     // Move Diagonally
//     mazePath(i+1, j+1, n, m, osf+"dig", ans);
// }

// void dicePath(int i, int n, string osf){
//     if(i == n-1){
//         cout << osf << '\n';
//         return;
//     }
//     if(i >= n){
//         return;
//     }
//     check(i+1, n, osf+"1");
//     check(i+2, n, osf+"2");
//     check(i+3, n, osf+"3");
//     check(i+4, n, osf+"4");
//     check(i+5, n, osf+"5");
//     check(i+6, n, osf+"6");
// }


int main() {
    // int n; // 5
    // cin >> n;
    // cout << fib(n) << endl;
    // toi(3, 'A', 'C', 'B');
    
    return 0;
}