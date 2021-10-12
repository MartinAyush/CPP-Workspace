#include<bits/stdc++.h>
using namespace std;

void display(vector<vector<int>> &grid, int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << grid[i][j] << " ";
        }
        cout << '\n';
    }
    cout << '\n';
}

// if knight in grid and position not visited
bool isSafe(int i, int j, int n, vector<vector<bool>> &visited){
    return i >= 0 && j >= 0 && i < n && j < n && visited[i][j] == false;
}

void knightTour(int i, int j, int n, vector<vector<int>> &grid, vector<vector<bool>> &visited, int count){
    // if we are in the last unvisited cell
    if(count == n*n-1){
        grid[i][j] = count;
        display(grid, n);
        return;
    }
    // if we go out of board
    if(count >= n*n){
        return;
    }
    // knight movements total 8
    // int xdir[8] = {-2, -1, 1, 2, -2, -1, 1, 2};
    // int ydir[8] = {-1, -2, 2, 1, -1, -2, 2, 1};
    int xdir[8] = {-2, -2, -1, -1, 2, 2, 1, 1};
    int ydir[8] = {1, -1, 2, -2, 1, -1, 2, -2};
    grid[i][j] = count;
    visited[i][j] = true;
    for(int x = 0; x < 8; x++){ // all knight moments
        if(isSafe(i+xdir[x], j+ydir[x], n, visited)){
            knightTour(i+xdir[x], j+ydir[x], n, grid, visited, count+1); // count++ to indicate we placed a knight
        }
    }
    visited[i][j] = false;
    grid[i][j] = -1;
}

int main(){
    int n = 5; // 5*5 board
    vector<vector<int>> grid(n, vector<int>(n, -1));
    vector<vector<bool>> visited(n, vector<bool>(n, false));
    knightTour(0, 0, n, grid, visited, 0);
    return 0;
}