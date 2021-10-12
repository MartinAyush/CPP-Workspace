#include<bits/stdc++.h>
using namespace std;

// 1 2 3 4 5 
// 3 4 5 1 2

// void LR(vector<int> arr, int k){
//     for (int h=0;h<k;h++){
//         int n = arr.size();
//         int temp = arr[0];
//         for (int i=0;i<n-1;i++){
//             arr[i] = arr[i+1];
//         }
//         arr[n-1] = temp;
//     }

//     for(auto x : arr){
//         cout << x << " ";
//     }
// }

void rev(vector<int> &arr, int start, int end){
    while(start < end){
        swap(arr[start++], arr[end--]);
    }
}

void reve(vector<int> &arr, int k){
    int n = arr.size();
    rev(arr, 0, k-1);
    rev(arr, k, n-1);
    rev(arr, 0, n-1);
}

int main(){ 
    vector<int> arr = {1, 2, 3, 4, 5};
    int k = 2;
    // LR(arr, k);
    reve(arr, k);
    for(int x : arr){
        cout << x << " ";
    }
    return 0;
}