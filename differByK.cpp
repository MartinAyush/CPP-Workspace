#include<bits/stdc++.h>
using namespace std;

// Searching in an array where adjacent differ by at most k

void check(vector<int> arr, int k, int x){
    int n = arr.size();
    int i = 0;
    while(i < n){
        if(arr[i] == x){
            cout << i << endl;
            return;
        }
        i += max(1, abs(arr[i]-x)/k);  // 1 is taken so that i should move 1 step
    }
    return;
}

int main() {
    // ans = 2; as 6->x is present at index 2 and is divisible by 1->k;
    vector<int> arr = {4, 5, 6, 7, 6};
    int k = 1;
    int x = 6;
    check(arr, k, x);

    return 0;
}