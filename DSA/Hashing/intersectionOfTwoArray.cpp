#include<bits/stdc++.h>
using namespace std;

// intersection of 2 arrays
// Intersection -> common element in both the array
// Union -> all unique elements in both the array

int main(){

    vector<int> a = {10, 15, 20, 30, 30, 5};
    vector<int> b = {30, 5, 30, 80};

    unordered_set<int> s;
    for(int i = 0; i < a.size(); i++){
        s.insert(a[i]);
    }
    vector<int> ans;
    for(int i = 0; i < b.size(); i++){
        if(s.find(b[i]) != s.end()){
            cout << b[i] << " ";
            s.erase(b[i]);
        }
    }
    
    return 0;
}