#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>> dp(5, vector<int>(5, -1));
    for(auto x : dp){
        for(auto y : x){
            cout << y << " ";
        }
        cout << "\n";
    }

    return 0;
}