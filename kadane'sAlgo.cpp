#include<bits/stdc++.h>
using namespace std;

// Kadane's Algorithm

// most optimized
// can return ans < 0
int kadane(int arr[], int n){
    int ans = arr[0];
    int count = arr[0];
    for(int i = 1; i < n; i++){
        count = max(count+arr[i], arr[i]);
        ans = max(ans, count);
    }
    return ans;
}

// Maximun sum of sub arrays --> returns result > 0
int kadane(int arr[], int n){
    int maxSum = INT_MIN, currSum = 0;
    for (int i=0;i<n;i++){
        currSum += arr[i];
        if (currSum < 0){
            currSum = 0;
        }
        maxSum = max(maxSum, currSum);
    }
    return maxSum;
}

// Maximum sum of circular sub array
int cirsub(int arr[], int n){
    int wrapSum = 0;    
    int total = 0;
    for (int i=0;i<n;i++){
        total += arr[i];
        arr[i] = -arr[i];
    }
    wrapSum = total + kadane(arr, n);
    return wrapSum;
}

int main() {
    int a[] = {10, -3, -4, 7, 6, 5, -4, -1}; 
    int n = sizeof(a)/sizeof(a[0]); 
    // cout << cirsub(a, n) << endl;
    cout << kadane(a, n) << endl;

    return 0;
}