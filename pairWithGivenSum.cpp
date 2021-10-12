#include<bits/stdc++.h>
using namespace std;

// pair with given sum in unsorted array

void naive(){
    vector<int> a = {2, 4, 6, 3}; // ans = no
    int sum = 17;
    bool flag = false;
    for(int i = 0; i < a.size(); i++){
        for(int j = 0; j < a.size(); j++){
            if(a[i]+a[j] == sum){
                flag = true;
                break;
            }
        }
    }
    (flag) ? cout << "Yes\n" : cout << "No\n";
}

int main(){
    vector<int> a = {3, 2, 8, 15, -8};
    int sum = 17;
    unordered_set<int> s;
    bool flag = false;
    for(int i = 0; i < a.size(); i++){
        if(s.find(sum - a[i]) != s.end()){
            flag = true;
        }
    }
    (flag) ? cout << "Yes\n" : cout << "No\n"; 
    
    
    return 0;
}