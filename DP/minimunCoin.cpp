#include<bits/stdc++.h>
using namespace std;

/*
Problem :- Given a value V and array coins[] of size M, the task is to make the change for V cents, 
            given that you have an infinite supply of each of coins{coins1, coins2, ..., coinsm} valued coins. 
            Find the minimum number of coins to make the change. If not possible to make change then return -1.
*/

// N -> change
// T -> Type of coins(size of array);

int minCoinBU(int N, vector<int> coins, int T){ 
    vector<int> dp(100, INT_MAX);
    dp[0] = 0;
    for(int i = 1; i <= N; i++){
        for(int j = 0; j < T; j++){
            if(coins[j] > i) continue;
            dp[i] = min(dp[i], 1 + dp[i-coins[j]]);
        }
    }
    return dp[N];
}

int minCoinTD(int N, vector<int> coins, int T, vector<int> dp){
    if(N == 0){
        return 0;
    }
    if(dp[N] != 0){
        return dp[N];
    }
    int ans = INT_MAX;
    for(int i = 0; i < T; i++){
        if(N-coins[i] >= 0){
            int sub = minCoinTD(N-coins[i], coins, T, dp);
            ans = min(sub+1, ans);
        }
    }
    dp[N] = ans;
    return dp[N];
}

int main(){
    int n = 15; // total coins
    vector<int> coins = {1, 7, 10};
    int t = coins.size(); // Type of coins
    // vector<int> dp(100, 0);
    // cout << minCoinTD(n, coins, t, dp);
    cout << minCoinBU(n, coins, t);

    return 0;
}