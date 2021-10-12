#include<bits/stdc++.h>
using namespace std;

// Memoization -> top down
int fib(int n){
    vector<int> dp(n+1);
    fill(dp.begin(), dp.end(), -1);
    if(dp[n] == -1){
        int res;
        if(n == 0 || n == 1){
            res = n;
        }else{
            res = fib(n-1) + fib(n-2);
        }
        dp[n] = res;
    }
    return dp[n];
}

// Tabulation -> bottom up
int fibo(int n){
    vector<int> dp(n+1);
    fill(dp.begin(), dp.end(), -1);
    dp[0] = 0;
    dp[1] = 1;
    for(int i = 2; i <= n; i++){
        dp[i] = dp[i-1] + dp[i-2];
    }
    return dp[n];
}

int main(){
    cout << fib(5) << '\n';
    cout << fibo(5) << '\n';
    return 0;
}