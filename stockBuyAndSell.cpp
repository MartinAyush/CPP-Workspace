#include<bits/stdc++.h>
using namespace std;

// Stocks buy and sell

// gives max profit
// void check(vector<int> arr){
//     int profit = 0;
//     for(int i = 1; i < arr.size(); i++){
//         if(arr[i] > arr[i-1]){
//             profit += arr[i] - arr[i-1];
//         }
//     }
//     cout << profit << endl;
// }

// check for buy day and sell day
void check(vector<int> arr){
    int n = arr.size();
    if(n <= 1){
        return;
    }
    int i = 0;
    while(i < n-1){
        while(i < n-1 && arr[i] >= arr[i+1]){
            i++;
        }
        if(i == n-1){
            break;
        }
        int buy = i++;
        while(i < n && arr[i] >= arr[i-1]){
            i++;
        }
        int sell = i - 1;
        cout << buy << " " << sell << '\n';
    }
}

int main() {
    vector<int> arr = {30, 20, 10};
    check(arr);
    
    

    return 0;
}