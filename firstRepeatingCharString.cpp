#include<bits/stdc++.h>
using namespace std;

// first repeating char in a string
// geeksforgeeks // g

void check(string s){
    vector<int> arr(256);
    fill(arr.begin(), arr.end(), -1);

    int ans = INT_MAX;

    for(int i=0;i<s.size();i++){
        if(arr[s[i]] == -1){
            arr[s[i]] = i;
        }else{
            ans = min(ans, arr[s[i]]);
        }
    }
    (ans == INT_MAX) ? cout << "-1" : cout << ans << endl;
}

int main() {
    string s = "abcd";
    check(s);

    return 0;
}