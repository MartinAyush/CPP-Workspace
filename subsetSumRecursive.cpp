#include<bits/stdc++.h>
using namespace std;

int solve(int arr[], int n, int sum){
    if(n == 0){
        return (sum == 0) ? 1 : 0;
    }
    return solve(arr, n-1, sum) + solve(arr, n-1, sum - arr[n-1]);
} 

int main() {
    int n = 5;
    int arr[n] = {10, 5, 2, 3, 6};
    int sum = 8;
    cout << solve(arr, n, sum);
    return 0;
}