#include<bits/stdc++.h>
using namespace std;

// bool pairSum (int arr[], int n, int k){
//     for (int i=0;i<n-1;i++) { // till second last element
//         for (int j=i+1;j<n;j++){ // from second element to last element 
//             if (arr[i] + arr[j] == k) {
//                 cout << i << " " << j << endl;
//                 return true;
//             }
            
//         }
//     }
//     return false;
// }

// if array is sorted 
bool pairSum(int arr[], int n, int k){
    int low = 0;
    int high = n-1;
    while (low < high){
        if (arr[low] + arr[high] == k){
            cout << low << " " << high << endl;
            return true;
        }else if (arr[low] + arr[high] > k){
            high--;
        }else{
            low++;
        }
    }
    return false;
}

int main() {
    int n,k;
    cin >> n >> k;
    int arr[n];
    for (int i=0;i<n;i++){
        cin >> arr[i];
    }
    cout << pairSum(arr, n, k) << endl;
    return 0;
}