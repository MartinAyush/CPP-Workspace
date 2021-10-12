#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    int n, m;
    cin >> n >> m;
    // for thief
    int x, y;
    cin >> x >> y;
    // for police
    int a, b;
    cin >> a >> b;
    // bool flag = true;
    // for(int i = x; i <= n; i++){
    //     for(int j = y; j <= m; j++){
    //         if(j%2!=0){
    //             b++;
    //         }
    //         if(i+j == a+b){
    //             flag = false;
    //         }
    //     }
    //     a++;
    // }
    // (flag) ? cout << "YES\n" : cout << "NO\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while(T--){
        solve();
    }
    return 0;
}