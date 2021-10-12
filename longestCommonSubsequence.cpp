#include<bits/stdc++.h>
using namespace std;

// Longest common subsequence

// recurisve naive solution
int lcs(string s1, string s2, int n, int m){
    if(n == 0 || m == 0){
        return 0;
    }
    if(s1[n-1] == s2[m-1]){
        return 1+lcs(s1, s2, n-1, m-1);
    }else{
        return max(lcs(s1, s2, n-1, m), lcs(s1, s2, n, m-1));
    }
}

// dp solution 
int lcs(string s1, string s2, int n, int m){
    int dp[n+1][m+1];
    memset(dp, -1, sizeof(dp));
    if(dp[n][m] != -1){
        return dp[n][m];
    }    
    if(n == 0 || m == 0){
        dp[n][m] = 0;
    }else{
        if(s1[n-1] == s2[m-1]){
            dp[n][m] = 1+lcs(s1, s2, n-1, m-1);
        }else{
            dp[n][m] = max(lcs(s1, s2, n-1, m), lcs(s1, s2, n, m-1));
        }
    }
    return dp[n][m];
}

// Tabulation solution 
int lcs(string s1, string s2, int n, int m){
    int dp[n+1][m+1];
    memset(dp, 0, sizeof(dp));

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(s1[i-1] == s2[j-1]){
                dp[i][j] = 1+dp[i-1][j-1];
            }else{
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
    }
    return dp[n][m];
}   


int main(){
    string s = "AXYZ";
    int n = s.size();
    string s2 = "BAZ";
    int m = s2.size();
    cout << lcs(s, s2, n, m);
    
    return 0;
}