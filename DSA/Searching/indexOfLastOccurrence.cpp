#include<bits/stdc++.h> 
using namespace std;

int check(int arr[], int n, int x){
    int start = 0;
    int end = n-1;
    while (start <= end){
        int mid = (start + end)/2;
        if(arr[mid] > x){
            end = mid - 1;
        }else if(arr[mid] < x){
            start = mid + 1;
        }else{
            if(arr[mid] != n-1 || arr[mid] != arr[mid+1]){
                return mid;
            }else{
                start = mid + 1;
            }
        }
    }
    return -1;
}

int main() {
    //           0  1   2   3   4   5   6
    int arr[] = {1, 10, 10, 10, 20, 20, 40};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << check(arr, n, 20);
    return 0;
}