#include<bits/stdc++.h>
using namespace std;

int ans = 0;

// inside maze and not visited
bool safe(int i, int j, vector<vector<bool>> &vis, int n){
    return i >= 0 && j >= 0 && i <= n-1 && j <= n-1 && vis[i][j] == false;
}

void mazePath(int i, int j, vector<vector<int>> a, int n, vector<vector<bool>> &vis){
    if(i == n-1 && j == n-1){
        ans++;
        return;
    }
    if(!safe(i, j, vis, n)){
        return;
    }

    vis[i][j] = true;

    // if i can make call for up down left right
    if(i-1 >= 0 && a[i-1][j] == 0){
        mazePath(i-1, j, a, n, vis);
    }
    if(i+1 < n && a[i+1][j] == 0){
        mazePath(i+1, j, a, n, vis);
    }
    if(j-1 >= 0 && a[i][j-1] == 0){
        mazePath(i, j-1, a, n, vis);
    }
    if(j+1 < n && a[i][j+1] == 0){
        mazePath(i, j+1, a, n, vis);
    }

    vis[i][j] = false;
}

int main(){
    int n;
    cin >> n;
    vector<vector<int> > maze(n, vector<int>(n));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> maze[i][j];
        }
    }

    vector<vector<bool>> vis(n, vector<bool>(n, false));
    
    mazePath(0, 0, maze, n, vis);
    
    cout << ans << '\n';
    return 0;
}