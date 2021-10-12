#include<bits/stdc++.h>
using namespace std;

// Union of two array

void naive(){
    vector<int> a = {15, 20, 5, 15};
    vector<int> b = {15, 15, 15, 20, 10};

    int n = a.size();
    int m = b.size();
    int c[n+m];
    for(int i = 0; i < a.size(); i++){
        c[i] = a[i];
    }
    for(int i = 0; i < b.size(); i++){
        c[n+i] = b[i];
    }
    int count = 0;
    for(int i = 0; i < n+m; i++){
        bool flag = false;
        for(int j = 0; j < i; j++){
            if(c[i] == c[j]){
                flag = true;
                break;
            }
        }
        if(flag == false){
            count++;
        }
    }
    cout << count << endl;
}


int main(){
    vector<int> a = {15, 20, 5, 15};
    vector<int> b = {15, 15, 15, 20, 10};
    unordered_set<int> s;
    for(int x : a){
        s.insert(x);
    }
    for(int x : b){
        s.insert(x);
    }

    cout << s.size() << endl;
    for(auto x : s){
        cout << x << " ";
    }
    
    return 0;
}