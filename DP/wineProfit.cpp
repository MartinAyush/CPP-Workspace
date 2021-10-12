#include<bits/stdc++.h>
using namespace std;

// Problem statement:
// Given n wines in a row, with integers denoting the cost of each wine respectively. Each year you can sell the first or the last wine in the row. Let the initial profits from the wines be P1, P2, P3…Pn. In the Yth year, the profit from the ith wine will be Y*P[i]. The goal is to calculate the maximum profit that can be earned by selling all the wines.

int profit(vector<int> &wines, int s, int e, int y, vector<vector<int>> &dp){
    if(s > e){
        return 0;
    }
    if(dp[s][e] != 0){
        return dp[s][e];
    }
    int op1 = wines[s]*y + profit(wines, s+1, e, y+1, dp);
    int op2 = wines[e]*y + profit(wines, s, e-1, y+1, dp);
    return dp[s][e] = max(op1, op2);
}

int main(){
    vector<int> wines = {2, 4, 6, 2, 5};
    int n = wines.size(); 
    vector<vector<int>> dp(100, vector<int>(100, 0));   
    cout << profit(wines, 0, n-1, 1, dp);
    return 0;
}