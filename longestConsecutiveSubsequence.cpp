#include<bits/stdc++.h>
using namespace std;

// longest consecutive subsequence

void naive(vector<int> a){
    sort(a.begin(), a.end());
    int count = 1;
    int ans = 1;
    for(int i = 0; i < a.size(); i++){
        if(i > 0 && a[i] == a[i-1]+1){
            count++;
        }else{
            ans = max(count,  ans);
            count = 1;
        }
    }
    ans = max(count, ans);
    cout << ans << endl;
}

void optimal(vector<int> a){
    int ans = 0;
    int curr = 1;
    unordered_set<int> s(a.begin(), a.end());
    for(int i = 0; i < a.size(); i++){
        if(s.find(a[i]-1) != s.end()){
            curr = 1;
            while(s.find(a[i]+curr) != s.end()){
                curr++;
            }
            ans = max(ans, curr);
        }
    }
    cout << ans << endl;
}


int main(){
    vector<int> a = {8, 20, 7, 30}; // 2;
    // vector<int> a = {20, 30, 40}; // 1;
    // vector<int> a = {1, 9, 3, 4, 2, 20}; // 4;
    optimal(a);
    return 0;
}