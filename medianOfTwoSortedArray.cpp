#include<bits/stdc++.h>
using namespace std;

void naive(){
    vector<vector<int>> mat;
    mat.push_back({1, 3, 6});
    mat.push_back({2, 6, 9});
    mat.push_back({3, 6, 9 });
    vector<int> tt;
    for(auto x : mat){
        for(auto xx : x){
            tt.push_back(xx);
        }
    }
    sort(tt.begin(), tt.end());
    int n = tt.size();
    cout << tt[n/2];
}



int main(){
    
    return 0;
}