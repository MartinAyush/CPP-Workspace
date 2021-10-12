#include<bits/stdc++.h>
using namespace std;

// Optimized nQueen

bitset<100> column, leftDiagonal, rightDiagonal;
int ans = 0;

void nqeen(int n, int col){
    if(col == n){
        ans++;
        return;
    }
    for(int i = 0; i < n; i++){
        if(!column[i] && !leftDiagonal[col-i+n-1] && !rightDiagonal[i+col]){
            column[i] = leftDiagonal[col-i+n-1] = rightDiagonal[i+col] = 1;
            nqeen(n, col+1);
            column[i] = leftDiagonal[col-i+n-1] = rightDiagonal[i+col] = 0;
        }
    }
}

int main(){
    int n = 5;
    nqeen(n, 0);
    cout << ans << '\n';
    return 0;
}