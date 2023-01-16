#include<bits/stdc++.h>
using namespace std;

// Left to Right Rotation
void leftRotation(vector<int> &a, int k){
    int n = a.size();
    for(int i = 0; i < k; i++){
        int x = a[0];
        for(int j = 0; j < n-1; j++){
            a[j] = a[j+1];
        }
        a[n-1] = x;
    }
}

// right to left Rotation
void rightRotation(vector<int> &a, int k){
    int n = a.size();
    for(int i = 0; i < k; i++){
        int x = a[n-1];
        for(int j = n-1; j >= 0; j--){
            a[j] = a[j-1];
        }
        a[0] = x;
    }
}

int main(){
    vector<int> a = {1, 2, 3, 4, 5};
    int k = 2;
    leftRotation(a, k);
    rightRotation(a, k);
    for(auto x : a){
        cout << x << " ";
    }
    return 0;
}