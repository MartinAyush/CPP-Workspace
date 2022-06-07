#include<bits/stdc++.h>
using namespace std;

// Min Path Sum

int minPathSum(vector<vector<int>> grid, int n, int m){
     if(n == 0 and m == 0){
          return grid[0][0];
     }
     if(n < 0 or m < 0){
          return 1e9;
     }
     int up = grid[n][m] + minPathSum(grid, n-1, m);
     int left = grid[n][m] + minPathSum(grid, n, m-1);
     return min(up, left);
}

int main() {
     vector<vector<int>> grid = {{1, 3, 1}, {1, 5, 1}, {4, 2, 1}};
     int n = grid.size();
     int m = grid[0].size();
     cout << minPathSum(grid, n-1, m-1);

     return 0;
}