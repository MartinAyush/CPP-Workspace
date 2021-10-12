#include<bits/stdc++.h>
using namespace std;

// trapping rain water

void solve(vector<int> arr){
    int n = arr.size();

    // left max array
    vector<int> lmax;
    lmax.push_back(arr[0]);
    for(int i = 1; i < n; i++){
        lmax.push_back(max(lmax.back(), arr[i]));
    }
    
    // right max array
    vector<int> rmax(n);
    rmax[n-1] = arr[n-1];
    for(int i = n-2; i >= 0; i--){
        rmax[i] = max(arr[i], rmax[i+1]);
    }
    
    int ans = 0;
    for(int i = 1; i < n-1; i++){
        ans += min(lmax[i], rmax[i]) - arr[i];
    }
    cout << ans << '\n';

}

int main() {
    vector<int> arr = {5, 0, 6, 2, 3};
    solve(arr);


    return 0;
}