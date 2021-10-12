#include<iostream>
using namespace std;

// Sum of all subarrays

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i=0;i<n;i++){
        cin >> arr[i];
    }

    int sum=0;
    // int ans=0;
    for (int i=0;i<n;i++){
        sum = 0;
        for (int j=i;j<n;j++){
            sum += arr[j];
            cout << sum << endl; 
            // ans += sum;  
        }
    }
    // cout << "ans " << ans;
    return 0;
}