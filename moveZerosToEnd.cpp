#include<bits/stdc++.h>
using namespace std;

void check(vector<int> arr){
    int count = 0;
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] != 0){
            swap(arr[i], arr[count++]);
        }
    }
    for(auto x : arr){
        cout << x << " ";
    }
    
}

int main() {
    vector<int> arr = {10, 20, 0, 0, 1, 0};
    check(arr);

    return 0;
}