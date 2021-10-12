#include<bits/stdc++.h>
using namespace std;

int lcs(string s1, string s2, int n, int m){

    vector<vector<int>> dp(n+1, vector<int>(m+1, 0));

    for(int i = 1; i <= n; i++){ // for string 1
        for(int j = 1; j <= m; j++){ // for string 2;
            if(s1[i-1] == s2[j-1]){
                dp[i][j] = 1 + dp[i-1][j-1];
            }else{
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
    }
    return dp[n][m];
}

int main(){
    string s1 = "AGGTAB";
    string s2 = "GXTXAYB";
    int n = s1.size();
    int m = s2.size();
    cout << lcs(s1, s2, n, m);


    return 0;
}