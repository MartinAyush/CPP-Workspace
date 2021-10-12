#include <bits/stdc++.h>
using namespace std;

// Important
// Joseph's problem
// Advance Recursion


// Find safe position
// int solve(int n, int k){
//     if(n == 1){
//         return 1;
//     }
//     return 1 + ((solve(n-1, k) + k) % n);
// }

int solve(int n, int k){
    if(n == 1){
        return 0;
    }
    return (k + solve(n-1, k))%n;
}

int main(){
    int n = 5;
    int k = 3;
    // ans = 0
    cout << solve(n, k);
    
    return 0;
}