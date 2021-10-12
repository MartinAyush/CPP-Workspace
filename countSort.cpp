#include<bits/stdc++.h>
using namespace std;

void countSort(int arr[], int n, int k){
    vector<int> a(k);

    for(int i=0;i<n;i++){
        a[arr[i]]++;
    }
    int idx = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<a[i];j++){
            arr[idx++] = i;
        }
    }
}

int main() {
    int arr[] = {1, 4, 4, 1, 0, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 5;
    countSort(arr, n, k);
    for(auto x : arr){
        cout << x << " ";
    }
    return 0;
}