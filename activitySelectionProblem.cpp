#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> p1, pair<int, int> p2){
    return p1.second < p2.second;
}

void check(vector<pair<int, int>> a){
    int n = a.size();
    sort(a.begin(), a.end(), cmp);
    pair<int, int> prev(a[0]);
    int ans = 1;
    for(int i = 1; i < n; i++){
        if(a[i].first < prev.second){
            continue;  
        } 
        else ans++;
        prev = a[i];
    }
    cout << ans << '\n';
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);  
    #endif

    vector<pair<int, int>> a = {{1, 3}, {2, 4}, {3, 8}, {10, 11}};
    check(a);

    return 0;
}