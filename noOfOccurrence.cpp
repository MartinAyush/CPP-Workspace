#include<bits/stdc++.h> 
using namespace std;

// find no of duplicate element in sorted array.
// 10, 20, 20, 20, 30, 30 
// 20 --> 3

int firstOcc(int arr[], int n, int k){
    int start = 0, end = n-1;
    while(start <= end){
        int mid = (start+end)/2;
        if(arr[mid] > k){
            end = mid - 1;
        }else if(arr[mid] < k){
            start = mid + 1;
        }else{
            if(mid == 0 || arr[mid] != arr[mid - 1]){
                return mid;
            }else{
                end = mid - 1;
            }
        }
    }
    return -1;
}

int lastOcc(int arr[], int n, int k){
    int start = 0, end = n-1;
    while(start <= end){
        int mid = (start+end)/2;
        if(arr[mid] > k){
            end = mid - 1;
        }else if(arr[mid] < k){
            start = mid + 1;
        }else{
            if(arr[mid] == n-1 || arr[mid] != arr[mid + 1]){
                return mid;
            }else{
                start = mid + 1;
            }
        }
    }
    return -1;
}

int check(int arr[], int n, int x){
    int first = firstOcc(arr, n, x);
    if(first == -1){
        return -1;
    }else{
        return (lastOcc(arr, n, x) - first + 1); // lastOccurrence - firstOccurrence + 1;
    }
}

int main() {
    int arr[] = {10, 20, 20, 20, 30, 30};
    int n = 6;
    cout << check(arr, n, 20);

    return 0;
}