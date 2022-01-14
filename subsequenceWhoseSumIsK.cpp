#include<bits/stdc++.h>
using namespace std;

// Print all subsequence whose sum is k

void check1(vector<int> a, int n, int idx, vector<int> ans, int sum, int tt){
    if(idx == n){
        if(sum == tt){
            for(auto x : ans) cout << x << " ";
            cout << "\n";
        }
        return;
    }
    // not pick
    check1(a, n, idx+1, ans, sum, tt);
    // pick
    ans.push_back(a[idx]);
    tt += a[idx];
    check1(a, n, idx+1, ans, sum, tt);
    return;
}

// if printing only one ans

bool check2(vector<int> a, int n, int idx, vector<int> ans, int sum, int tt){
    if(idx == n){
        if(sum == tt){
            for(auto x : ans) cout << x << " ";
            return true;
        }else{
            return false;
        }
    }
    // not pick
    if(check2(a, n, idx+1, ans, sum, tt) == true) return true;
    // pick
    ans.push_back(a[idx]);
    tt += a[idx];
    if(check2(a, n, idx+1, ans, sum, tt) == true) return true;
    return false;
}

int main(){
    vector<int> a = {1, 2, 1};
    int n = a.size();
    int idx = 0;
    int sum = 2;
    int tt = 0;
    vector<int> ans;
    check2(a, n, idx, ans, sum, tt);

    return 0;
}