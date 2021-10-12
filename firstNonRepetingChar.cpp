#include<bits/stdc++.h>
using namespace std;

// first non repeating char in string
// geeksforgeeks
// f

int check(string s){
    vector<int> arr(256);
    fill(arr.begin(), arr.end(), -1);
    
    int ans = INT_MAX;
    for(int i=0;i<s.size();i++){
        if(arr[s[i]] == -1){
            arr[s[i]] = i;
        }else{
            arr[s[i]] = -2;
        }
    }
    for(int i=0;i<256;i++){
        if(arr[i] >= 0){
            ans = min(ans, arr[i]);
        }
    }
    return (ans == INT_MAX) ? -1 : ans;
}

int main(){
    string s = "abcabc";
    cout << check(s);
    
    return 0;
}