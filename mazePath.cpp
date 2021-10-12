#include<bits/stdc++.h>
using namespace std;

void mazePath(int i, int j, int n, int m, string osf, int &ans){
    if(i == n-1 && j == m-1){
        cout << osf << '\n';
        ans++;
        return;
    }
    if(i >= n && j >= m){
        return;
    }
    // Move Right
    mazePath(i, j+1, n, m, osf+"R", ans);
    // Move Downward
    mazePath(i+1, j, n, m, osf+"D", ans);
    // Move Diagonally
    mazePath(i+1, j+1, n, m, osf+"dig", ans);
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);  
    #endif
    cout << "Before Call\n";
    string osf = "";
    int ans = 0;
    mazePath(0, 0, 3, 3, osf, ans);
    cout << ans << '\n';
    cout << "After Call\n";
    return 0;
}