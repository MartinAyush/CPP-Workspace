#include<bits/stdc++.h>
using namespace std;

// You are given a triangular array/list 'TRIANGLE'. Your task is to return the minimum path sum to reach from the top to the bottom row.

int naive(vector<vector<int>>& grid, int n, int i, int j){
    if(i == n-1){
        return grid[i][j];
    }
    int down = grid[i][j] + naive(grid, n, i+1, j);
    int downLeft = grid[i][j] + naive(grid, n, i+1, j+1);
    return min(down, downLeft);
}

int minimumPathSum(vector<vector<int>>& triangle, int n){
	// Write your code here.
    vector<vector<int>> dp(n, vector<int>(n, 0));
    for(int i = 0; i < n; i++){             // Fill last row
        dp[n-1][i] = triangle[n-1][i];
    }
    for(int i = n-2; i >= 0; i--){
        for(int j = triangle[i].size()-1; j >= 0; j--){
            int down = triangle[i][j] + dp[i+1][j];
            int downLeft = triangle[i][j] + dp[i+1][j+1];
            dp[i][j] = min(down, downLeft);
        }
    }
    return dp[0][0];
}

int main() {
    vector<vector<int>> grid = {{1}, {2, 3}, {3, 6, 7}, {8, 9, 6, 10}};
    int n = grid.size();
    cout << naive(grid, n, 0, 0);
    // cout << minimumPathSum(grid, n);

    return 0;
}