#include<bits/stdc++.h>
using namespace std;

// Max number of flips to make array same
// always flip 2nd group elements in group
// 0 0  1 1  0 0  1 1
// here 2nd group is 1
// if even no of groups then difference is 0
// if odd no of gorups then difference is 1

void check(vector<int> arr){
    int n = arr.size();
    for(int i = 1; i < arr.size(); i++){
        if(arr[i] != arr[i-1]){
            if(arr[i] != arr[0]){
                cout << "From " << i << " To ";
            }else{
                cout << i - 1 << '\n';
            }
        }
    }
    if(arr[n-1] != arr[0]){
        cout << n - 1 << '\n';
    }
}

int main(){
    vector<int> arr = {0, 0, 1, 1, 0, 0, 1, 1, 0};
    check(arr);


    return 0;
}