#include<bits/stdc++.h>
using namespace std;

// prev smaller element;

int main(){
    vector<int> a = {4, 2, 1, 5, 6, 3, 2, 4, 2};
    int n = a.size();
    vector<int> ans;
    stack<int> s;
    for(int i = 0; i < n; i++){
        while(!s.empty() and s.top() >= a[i]){
            s.pop();
        }
        if(!s.empty()){
            ans.push_back(s.top());
        }else{
            ans.push_back(-1);
        }
        s.push(a[i]);
    }
    for(auto x : ans) cout << x << " ";
    return 0;
}