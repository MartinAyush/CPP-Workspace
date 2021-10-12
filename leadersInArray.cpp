#include<bits/stdc++.h>
using namespace std;

// Leaders in an array

void check(vector<int> arr){
    vector<int> ans;
    int n = arr.size();
    int top = arr[n-1]; // Last element is always a leader
    ans.push_back(top);
    for(int i = n-2; i >= 0; i--){
        if(arr[i] > top){
            top = arr[i];
            ans.push_back(top);
        }
    }
    for(int i = ans.size() - 1; i >= 0; i--){
        cout << ans[i] << " ";
    }
}

int main(){
    vector<int> arr = {7, 10, 4, 10, 6, 5, 2};
    check(arr);

    return 0;
}