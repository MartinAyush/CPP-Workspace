#include <bits/stdc++.h>
using namespace std;

void solve(){
    int x;
    cin >> x;
    float y;
    cin >> y;
    if((x % 5 == 0) && (x+0.50 <= y)){
        y -= x+0.50;
        printf("%.2f\n", y);
    }else{
        printf("%.2f\n", y);
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();

    return 0;
}