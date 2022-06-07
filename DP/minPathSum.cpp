#include<bits/stdc++.h>
using namespace std;

// Min Path Sum

int minPathSum(vector<vector<int>> &grid, int n, int m, vector<vector<int>> &dp){
    if(n == 0 and m == 0){
        return grid[0][0];
    }
    if(n < 0 or m < 0){
        return 1e9;
    }
    if(dp[n][m] != -1){
        return dp[n][m];
    }
    int up = grid[n][m] + minPathSum(grid, n-1, m, dp);
    int left = grid[n][m] + minPathSum(grid, n, m-1, dp);
    return dp[n][m] = min(up, left);
}

int main() {
    vector<vector<int>> grid = {{1, 3, 1}, {1, 5, 1}, {4, 2, 1}};
    int n = grid.size();
    int m = grid[0].size();
    vector<vector<int>> dp(n, vector<int>(m, -1));
    cout << minPathSum(grid, n-1, m-1, dp);

    return 0;
}