#include<bits/stdc++.h>
using namespace std;

// 5
// 6 6 7 4 4
// 9
// ans = 8
// my 11

int solveWordWrap(vector<int>nums, int k) 
{ 
    // Code here
    map<int, int> m;
    int n = nums.size();
    for(int i = 0; i < n-1; i++){
        m[nums[i]]++;
    }

    int ans = 0;
    // k - (s*count) - count-1
    for(auto x : m){
        int cost = 0;
        if(x.second > 1){
            cost = k - (x.first*x.second) - (x.second-1);
        }else{
            cost = k - x.first;
        }
        // cout << cost << " ";
        ans += cost;
    }
    // cout << '\n';
    return ans;
}


int main(){
    // int n = 5;
    vector<int> a = {6, 6, 7, 4, 4};
    int k = 9;
    cout << solveWordWrap(a, k);

    return 0;
}