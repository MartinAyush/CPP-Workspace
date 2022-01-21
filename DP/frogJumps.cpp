#include<bits/stdc++.h>
using namespace std;

// Problem Statement :-
// There is a frog on the 1st step of an N stairs long staircase. The frog wants to reach the Nth stair. HEIGHT[i] is the height of the (i+1)th stair.If 
// Frog jumps from ith to jth stair, the energy lost in the jump is given by |HEIGHT[i-1] - HEIGHT[j-1] |.In the Frog is on ith staircase, he can jump 
// either to (i+1)th stair or to (i+2)th stair. Your task is to find the minimum total energy used by the frog to reach from 1st stair to Nth stair.

int frogJump(vector<int> &heights, int n, int idx, vector<int> &dp){
    if(idx == 0){
        return 0; // because can't call func for -1 and -2
    }
    if(dp[idx] != 0){
        return dp[idx];
    }
    int left = INT_MAX, right = INT_MAX;
    left = frogJump(heights, n, idx-1, dp) + abs(heights[idx] - heights[idx-1]);
    if(idx > 1){
        right = frogJump(heights, n, idx-2, dp) + abs(heights[idx] - heights[idx-2]);
    }
    return dp[idx] = min(left, right);
}

int frogJumpTab(vector<int> &heights, int n, int idx){
    int dp[n];
    memset(dp, -1, sizeof dp);
    dp[0] = 0;
    for(int i = 1; i < n; i++){
        int left = INT_MAX, right = INT_MAX;
        left = dp[i-1] + abs(heights[i]-heights[i-1]);
        if(i > 1){
            right = dp[i-2] + abs(heights[i]-heights[i-2]);
        }
        dp[i] = min(left, right);
    }
    return dp[n-1];

}

// k Jumps
// follow up

int main(){
    vector<int> heights = {30, 10, 60, 10, 60, 50};
    int n = heights.size();
    int idx = n-1;
    vector<int> dp(n);
    cout << frogJumpTab(heights, n, idx);

    return 0;
}