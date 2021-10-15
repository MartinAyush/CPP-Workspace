#include<bits/stdc++.h>
using namespace std;

bool checkReach(vector<int> &arr, int n){
    int idx = n-1;
    for(int i = n-1; i >= 0; i--){
        if(i+arr[i] >= idx){
            idx = i;
        }
    }
    return idx == 0;
}

int minJumps(vector<int> &arr, int n){
    if(!checkReach(arr, n)){
        return -1;
    }
    int jump = 1;
    int currJump = arr[0], maxJump = arr[0];
    int i = 0;
    while(i < n-1){
        maxJump = max(maxJump, i + arr[i]);
        if(i == currJump){
            jump++;
            currJump = maxJump;
        }
        i++;
    }
    return jump;
}

int main(){
    // vector<int> arr = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9};
    vector<int> arr = {1, 4, 3, 2, 6, 7};
    int n = arr.size();
    cout << minJumps(arr, n);

    return 0;
}