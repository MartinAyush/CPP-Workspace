#include<bits/stdc++.h>
using namespace std;

void mergeWithoutExtraSpace(int arr1[], int arr2[], int n, int m){
    // 1st method
    // int arr[n+m];
    // for(int i=0;i<n;i++){
    //     arr[i] = arr1[i];
    // }
    // for(int i=0;i<m;i++){
    //     arr[n+i] = arr2[i];
    // }
    // sort(arr, arr+n+m);
    // for(int i=0;i<n;i++){
    //     arr1[i] = arr[i];
    // }
    // for(int i=0;i<m;i++){
    //     arr2[i] = arr[n+i];
    // }

    // 2nd method
    // int i=0, j=0;
    // while(i < n){
    //     if(arr1[i] > arr2[j]){
    //         swap(arr1[i++], arr2[j]);
    //         sort(arr2, arr2+m);
    //     }
    // }

    // 3rd method
    // int i=n-1, j=0;
    // while(i >= 0 && j < m){
    //     if(arr1[i] > arr2[j]){
    //         swap(arr1[i], arr2[j]);
    //     }else{
    //         break;
    //     }
    // }
    // sort(arr1, arr1+n);
    // sort(arr2, arr2+m);
}

void merge(int a[], int b[], int n, int m){
    int i=0, j=0;
    while(i < n && j < m){
        if(a[i] < b[j]){
            cout << a[i++] << " ";
        }else{
            cout << b[j++] << " ";
        }
    }
    while(i < n){
        cout << a[i++] << " ";
    }
    while(j < m){
        cout << b[j++] << " ";
    }
}

int main(){
    // int a[] = {10, 15, 20, 40};
    // int b[] = {5, 6, 6, 10, 15};
    int a[] = {1, 1, 2};
    int b[] = {3};
    int n = sizeof(a)/sizeof(a[0]);
    int m = sizeof(b)/sizeof(b[0]);
    
    // int arr[n+m];

    // for(int i=0;i<n;i++){
    //     arr[i] = a[i];
    // }

    // for(int i=0;i<m;i++){
    //     arr[i+n] = b[i];
    // }

    // sort(arr, arr+m+n);
    
    // for(int x : arr){
    //     cout << x << " ";
    // }


    // int arr1[] = {10, 12};
    // int arr2[] = {5, 18, 20};
    // int n = 2;
    // int m = 3;
    // mergeWithoutExtraSpace(arr1, arr2, n, m);
    // for(int x : arr1){
    //     cout << x << " ";
    // }
    // cout << endl;
    // for(int x : arr2){
    //     cout << x << " ";
    // }
    // return 0;

    return 0;
}