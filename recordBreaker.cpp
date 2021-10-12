#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n; // Size of array

    int arr[n+1];
    for (int i=0;i<n;i++){
        cin >> arr[i];
    }
    arr[n] = -1; // if we compare last element with the -1 then last no will be greater which is second condition

    int mx = -1, ans = 0; 
    // mx is max of no till i
    for (int i=0;i<n;i++){
        if (arr[i] > mx && arr[i] > arr[i+1]){
            ans++;
        }
        mx = max(arr[i], mx);
    }
    
    cout << "ans is : " << ans << endl;

    return 0;
}