#include<bits/stdc++.h>
using namespace std;

// Kadane's Algorithm
// Problem Statement : Given an array Arr[] of N integers. Find the contiguous sub-array(containing at least one number) which has the maximum sum and return its sum.

int kadane(int arr[], int n){
    int ans = arr[0];
    int count = arr[0];
    for(int i = 0; i < n; i++){
        count = max(arr[i], count+arr[i]);
        ans = max(ans, count);
    }
    return ans;
}

// int kadane(int arr[], int n){
//     int maxSum = INT_MIN, currSum = 0;
//     for (int i=0;i<n;i++){
//         currSum += arr[i];
//         if (currSum < 0){
//             currSum = 0;
//         }
//         maxSum = max(maxSum, currSum);
//     }
//     return maxSum;
// }

int main() {
    int a[] = {-2, -3, 4, -1, -2, 1, 5, -3}; 
    int n = sizeof(a)/sizeof(a[0]); 
    
    cout << kadane(a, n) << endl;

    return 0;
}