#include<bits/stdc++.h>
using namespace std;

void xSort(vector<int> &a, int n){
    if(n == 1){
        return;
    }
    for(int i = 0; i < n-1; i++){
        if(a[i] > a[i+1]){
            swap(a[i], a[i+1]);
        }
    }
    xSort(a, n-1);
}

int main(){
    vector<int> a = {5, 4, 3, 2, 1};
    xSort(a, a.size());
    for(auto x : a){
        cout << x << " ";
    }
    return 0;
}