#include<bits/stdc++.h>
using namespace std;

// Window Sliding technique;

void check(vector<int> arr, int k){
    int currSum = 0;
    for(int i = 0; i < k; i++){
        currSum += arr[i];
    }
    int ans = currSum;
    for(int i = k; i < arr.size(); i++){
        currSum += (arr[i] - arr[i-k]);
        ans = max(ans, currSum);
    }
    cout << ans << "\n";
}

int main() {
    vector<int> arr = {1, 8, 30, -5, 20, 7};
    int k = 3;
    
    check(arr, k);
    // ans = 45
    return 0;
}