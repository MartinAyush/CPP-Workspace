#include<bits/stdc++.h>
using namespace std;

// Problem:- Given an array of integers, find the length of the longest (strictly) increasing subsequence from the given array.
// Time complexity = O(N^2)
// Space complexity = O(N)

void lis(vector<int> a, int n){
    vector<int> dp(n, 0); // stores the count of smaller elements from [0..i-1]
    dp[0] = 1;
    for(int i = 1; i < n; i++){
        dp[i] = 1; // always 1 LIS(longest increasing subsequence)
        for(int j = 0; j < i; j++){
            if(a[j] < a[i]){
                dp[i] = max(dp[i], 1 + dp[j]);
            }
            // if lis[4] = 2 then if(a[i] > a[0..i-1]){lis[5] = lis[4] + 1};
        }
    }
    for(int x : dp) cout << x << " ";
    cout << "\n";
}

int main(){
    vector<int> a = {5,8,3,7,9,1}; // ans 3
    int n = a.size();
    lis(a, n);
    return 0;
}