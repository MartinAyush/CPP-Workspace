#include<bits/stdc++.h>
using namespace std;

// check if array is sorted
// bool check(int arr[], int n){
//     if (n == 1){
//         return true;
//     }
//     int prev = check(arr+1, n-1);
//     return (arr[0] < arr[1] && prev);
// }

// printing numbers till n in inc order
// void dec(int n){
//     if (n == 0){
//         return;
//     }
//     cout << n << endl;
//     dec(n-1);
// }

// printing numbres till n in increasing order
// void inc(int n){
//     if (n == 1){
//         cout << "1" << endl;
//         return;
//     }

//     inc(n-1);
//     cout << n << endl;
//     return;
// }

// First Occurence of a number in an array
int firstOcc(int arr[], int n, int i, int key){
    if (n == i){
        return -1;
    }

    if (arr[i] == key){
        return i;
    }
    return firstOcc(arr, n, i+1, key);
}

int lastOcc(int arr[], int n, int i, int key){
    if (n == i){
        return -1;
    }
    if ()
}

int main() {
    // int arr[] = {1, 2, 3, 4, 5};
    // cout << check(arr, 5) << en|| n == 0dl;

    // int n;
    // cin >> n;
    // inc(n);

    int arr[] = {4, 2, 1, 2, 5, 2, 7};
    cout << firstOcc(arr, 5, 0, 2);
    cout << ;

    return 0;
}