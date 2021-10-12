#include<bits/stdc++.h>
using namespace std;

// subarray with given sum

void naive(){
    
// 5 12
// 1 2 3 7 5
    int n,s;
    cin >> n >> s;

    int a[n];
    for (int i=0;i<n;i++){
        cin >> a[i];
    }
    int sum = 0;
    for (int i=0;i<n;i++){
        sum = 0;
        for (int j=i;j<n;j++){
            sum += a[j];
            if (sum == s){
                cout << "Ans is : " << sum;
            }
        }
    }

}

int main(){
    vector<int> a = {15, 2, 8, 10, -5, -8, 6};
    int k = 3;
    
    vector<int> psum;
    psum.push_back(a[0]);
    for(int i = 1; i < a.size(); i++){
        psum.push_back(psum.back()+a[i]);
    }

    unordered_set<int> s;
    bool flag = false;
    for(int i = 0; i < psum.size(); i++){
        if(s.find(psum[i] - k) != s.end()){
            flag = true;
            break;
        }
        if(psum[i] == k){
            flag = true;
            break;
        }
        s.insert(psum[i]);
    }
    (flag) ? cout << "Yes\n" : cout << "No\n";

    return 0;
}