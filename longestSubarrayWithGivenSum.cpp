#include<bits/stdc++.h>
using namespace std;

// Longest subarray with given sum

void naive(vector<int> a, int sum){
    int ans = 0;
    for(int i = 0; i < a.size(); i++){
        int s = 0;
        for(int j = i; j < a.size(); j++){
            s += a[j];
            if(s == sum){
                ans = max(j-i+1, ans);
            }
        }
    }
    cout << ans << endl;
}

void optimal(vector<int> a, int sum){
    int psum = 0;
    int ans = 0;
    unordered_map<int, int> m;
    for(int i = 0; i < a.size(); i++){
        psum += a[i];
        if(psum == sum){
            ans = max(ans, i+1);
        }
        if(m.find(psum) == m.end()){
            m.insert(make_pair(psum, i));
        }
        if(m.find(psum-sum) != m.end()){
            ans = max(ans, i-m[psum-sum]);
        }
    }
    cout << ans << '\n';
}

int main(){
    vector<int> a = {8, 3, 1, 5, -6, 6, 2, 2};
    int sum = 4;
    optimal(a, sum);
    // ans = 4;
    return 0;
}