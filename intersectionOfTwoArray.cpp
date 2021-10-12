#include<bits/stdc++.h>
using namespace std;

// intersection of 2 arrays

int main(){

    vector<int> a = {10, 15, 20, 30, 30, 5};
    vector<int> b = {30, 5, 30, 80};

    unordered_set<int> s;
    for(int i = 0; i < a.size(); i++){
        s.insert(a[i]);
    }
    int res = 0;
    vector<int> ans;
    for(int i = 0; i < b.size(); i++){
        if(s.find(b[i]) != s.end()){
            ans.push_back(b[i]);
            s.erase(b[i]);
        }
    }
    for(int x : ans)
        cout << x << " ";
    return 0;
}