#include<bits/stdc++.h>
using namespace std;

// Longest subarray with equal no of 0's and 1's

void check(vector<int> a){
    // change 0 with -1
    for(int i = 0; i < a.size(); i++){
        if(a[i] == 0){
            a[i] = -1;
        }
    }
    int psum = 0;
    int ans = 0;
    unordered_map<int, int> s;
    for(int i = 0; i < a.size(); i++){
        psum += a[i];
        if(psum == 0){
            ans = max(ans, i+1);
        }
        if(s.find(psum) != s.end()){
            ans = max(ans, i-s[psum]);
        }
        s.insert(make_pair(psum, i));
    }
    cout << ans << endl;
}

int main(){
    // vector<int> a = {1, 0, 1, 1, 1, 0, 0};
    // vector<int> a = {1, 1, 1, 0};
    vector<int> a = {0, 0, 1, 1, 1, 1, 1, 0};
    check(a);


    return 0;
}