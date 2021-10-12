#include<bits/stdc++.h>
using namespace std;
 
int main() {
    // ***** Size of array *****

    // 1
    // int n;
    // cin >> n;
    
    // 2
    // int n = sizeof(array)/sizeof(array[0]);

    // ***** Array Input *****
    
    // for (int i=0;i<sizeOfArray;i++){
    //     cin >> arrray[i];
    // }

    // ***** Array Output *****
    
    // for (int i=0;i<sizeOfArray;i++){
    //     cout << array[i] << " ";
    // }

    vector<int> random(100);
    for(int i = 0; i < 100; i++){
        random[i] = rand()%100; // numbers between 0 to 99;
    }
    for(int x : random){
        cout << x << " ";
    }

    return 0;
}