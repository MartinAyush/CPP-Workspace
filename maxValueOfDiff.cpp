#include<bits/stdc++.h>
using namespace std;

// Maximum value of arr[j] - arr[i] such that j > i

void check(vector<int> arr){
    int diff = arr[1] - arr[0];
    int midf = arr[0];
    for(int i = 1; i < arr.size(); i++){
        diff = max(diff, arr[i]-midf);
        midf = min(midf, arr[i]);
    }
    cout << diff << endl;
}

int main() {
    vector<int> arr = {30, 10, 8, 2};
    check(arr);

    return 0;
}