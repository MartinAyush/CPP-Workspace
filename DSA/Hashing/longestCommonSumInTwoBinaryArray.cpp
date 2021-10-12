#include<bits/stdc++.h>
using namespace std;

// longest common span with same sum in two binary array

void naive(vector<int> a, vector<int> b){
    int ans = 0;
    for(int i = 0; i < a.size(); i++){
        int s1 = 0, s2 = 0;
        for(int j = i; j < b.size(); j++){
            s1 += a[j];
            s2 += b[j];
            if(s1 == s2){
                ans = max(ans, j-i+1);
            }
        }
    }
    cout << ans << endl;
}

void optimal(vector<int> a, vector<int> b){
    vector<int> temp;
    for(int i = 0; i < a.size(); i++){
        temp.push_back(a[i]-b[i]);
    }
    int psum = 0;
    int ans = 0;
    unordered_map<int, int> m;
    for(int i = 0; i < temp.size(); i++){
        psum += temp[i];
        if(psum == 0){
            ans = max(ans, i+1);
        }
        if(m.find(psum) != m.end()){
            ans = max(ans, i-m[psum]);
        }
        m.insert(make_pair(psum, i));
    }
    cout << ans << endl;
}


int main(){
    vector<int> a = {0, 1, 0, 0, 0, 0};
    vector<int> b = {1, 0, 1, 0, 0, 1};
    // ans = 4;
    optimal(a, b);
    return 0;
}