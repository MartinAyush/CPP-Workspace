#include<bits/stdc++.h>
using namespace std;

// Stock span Problem with its variation

void naive(){
    vector<int> a = {40, 30, 20, 10};
    for(int i = 0; i < a.size(); i++){
        int count = 0;
        for(int j = i; j >= 0; j--){
            if(a[j] <= a[i]){
                count++;
            }else{
                break;
            }
        }
        cout << count << " ";
    }
}

int main(){
    vector<int> a = {15, 13, 12, 14, 16, 8, 6, 4, 10, 30};
    stack<int> s;
    s.push(0);
    cout << 1 << " ";
    for(int i = 1; i < a.size(); i++){
        while(s.empty() == false && a[s.top()] <= a[i]){
            s.pop();
        }
        int span = (s.empty()) ? (i+1) : (i-s.top());
        cout << span << " ";
        s.push(i);
    }
    
    return 0;
}