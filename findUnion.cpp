#include<bits/stdc++.h>
using namespace std;

bool binarySearch(int arr[], int n, int x){
    int start = 0;
    int end = n;
    while (start < end){
        int mid = (start + end)/2;
        if (arr[mid] == x){
            return true;
        }else if (arr[mid] > x){
            end = mid - 1;
        }else {
            start = mid + 1;
        }  
    } 
    return false;
}

int setUnion(int arr1[], int arr2[], int n, int m){
    int ans = 0;
    int i=0, j=0;
    for (i=0;i<n;i++){
        
        if (binarySearch(arr2, m, arr1[i])){
            ans++;
        }
    }
    // while (i < high){
    //     i++;
    //     ans++;
    // }
    return ans;
}

int main(){
    // int arr1[] = {1, 2, 3, 4, 5};
    // int arr2[] = {1, 2, 3};

    int arr1[] = {85, 25, 1, 32, 54, 6};
    int arr2[] = {85, 2};
    int n = sizeof(arr1)/sizeof(arr1[1]);
    int m = sizeof(arr2)/sizeof(arr2[1]);
   
    cout << "Union is " << setUnion(arr1, arr2, n, m) << endl;

    return 0;
}