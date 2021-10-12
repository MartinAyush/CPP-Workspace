#include<bits/stdc++.h>
using namespace std;

// Array Rotation -- By Reversal Algorithm

// 1 2 3 4 5 --> rotate 2 elements
// 3 4 5 1 2 --> ans

// Algo
// 1 2 3 4 5
// 1 2 | 3 4 5 --> Divided into parts
// 2 1 3 4 5
// 2 1 5 4 3 --> swap 3 and 5
// 3 4 5 1 2 --> Ans

void reve(int arr[], int start, int end){
    while (start < end){
        swap(arr[start++], arr[end--]);
    }
}

void rev(int a[], int n, int k){
    reve(a, 0, k-1);
    reve(a, k, n-1);
    reve(a, 0, n-1);
}

int main() {
    int a[] = {1, 2, 3, 4, 5};
    int n = 5;
    int k = 2; // no of element to be rotated

    rev(a, n, k);
    for (int i=0;i<n;i++){
        cout << a[i] << " ";
    }
    return 0;
}