#include<bits/stdc++.h>
using namespace std;

// First occurrence of the elemnt in the array 

int check(int arr[], int n, int x){
    int start = 0, end = n-1;
    while(start <= end){
        int mid = (start + end)/2;
        if(arr[mid] > x){
            end = mid - 1;
        }else if (arr[mid] < x){
            start = mid + 1;
        }else {
            if(mid == 0 || arr[mid] != arr[mid - 1]){
                return mid;
            }else{
                end = mid - 1;
            }
        }
    }
    return -1;
}

int main() {
    int arr[] = {10, 20, 20, 30, 30, 30, 40};
    int n = 7;
    int x = 30;
    cout << check(arr, n, x);

    return 0;
}