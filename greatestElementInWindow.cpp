#include<bits/stdc++.h>
using namespace std;

// greatest element in window of size k

void naive(vector<int> a, int k){
    for(int i = 0; i < a.size()-k+1; i++){
        int m = a[i];
        for(int j = 0; j < k; j++){
            m = max(m, a[i+j]);
        }
        cout << m << " ";
    }
}

void optimal(vector<int> a, int k){
    deque<int> d;
    for(int i = 0; i < k; i++){
        while(!d.empty() && arr[d.back()] <= arr[i]){
            d.pop_back();
        }
        d.push_back(i);
    }
    for(int i = k; i < n; i++){
        cout << a[d.front()] << " ";
        // remove elements which are not part of curr window
        while(!d.empty() && d.front() <= i-k){
            d.pop_front();
        }
        // remove all small elements 
        while(!d.empty() && arr[d.back()] <= arr[i]){
            d.pop_back();
        }
        d.push_back(i);
    }
    cout << a[d.front()] << '\n';
}

int main(){
    vector<int> a = {10, 8, 5, 12, 15, 7, 6};
    int k = 3;
    optimal(a, k);
    
    return 0;
}