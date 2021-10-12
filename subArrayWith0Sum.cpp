#include<bits/stdc++.h>
using namespace std;

// subarray with 0 sum

void naive(){
    vector<int> a = {1, 4, 13, -3, -10, 5};
    bool flag = false;
    for(int i = 0; i < a.size(); i++){
        int sum = 0;
        for(int j = i; j < a.size(); j++){
            sum += a[j];
            if(sum == 0){
                flag = true;
                break;
            }
        }
    }
    (flag) ? cout << "Yes\n" : cout << "No\n";
}

int main(){
    vector<int> a = {1, 4, 13, -3, -10, 5};
    
    vector<int> prefSum;
    prefSum.push_back(a[0]);
    for(int i = 1; i < a.size(); i++){
        prefSum.push_back(prefSum.back()+a[i]);
    }
    
    unordered_set<int> s;
    bool flag = false;
    for(int i = 0; i < prefSum.size(); i++){
        if(s.find(prefSum[i]) != s.end()){
            flag = true;
            break;
        }
        if(prefSum[i] == 0){
            flag = true;
            break;
        }
        s.insert(prefSum[i]);
    }
    (flag) ? cout << "Yes\n" : cout << "No\n";

    return 0;
}