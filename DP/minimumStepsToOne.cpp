#include<bits/stdc++.h>
using namespace std;

int minStep(int n, int dp[]){
    if(n == 1){
        return 0;
    }
    if(dp[n] != 0){
        return dp[n];
    }
    int a, b, c;
    if(n % 3 == 0){
        a = minStep(n/3, dp) + 1;
    }
    if(n % 2 == 0){
        b = minStep(n/2, dp) + 1;
    }
    c = minStep(n-1, dp) + 1;
    
    int ans = min(min(a, b), c);
    return dp[n] = ans;
}

int minStepBottomUp(int n){
    int dp[100] = {0};
    dp[0] = INT_MAX;
    dp[1] = 0;
    dp[2] = dp[3] = 1;
    for(int i = 4; i < 50; i++){
        int a, b, c;
        if(i % 3 == 0){
            a = dp[i/3] + 1;
        }
        if(i % 2 == 0){
            b = dp[i/2] + 1;
        }
        c = dp[i-1] + 1;
        dp[i] = min(min(a, b), c);
    }
    return dp[n];
}

int main(){

    int dp[100] = {0};
    cout << minStep(13, dp) << "\n";
    cout << minStepBottomUp(13) << "\n";

    return 0;
}