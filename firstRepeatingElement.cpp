#include<bits/stdc++.h>
using namespace std;

// First repeating element

int main() {
    int n;
    cin >> n;

    int a[n];
    for (int i=0;i<n;i++){
        cin >> a[i];
    }

    // first repeating element i.e 5 and 5
    // ans is index of 5

    // creating idx arr of -1
    const int N = 1e5; // 10^5
    int idx[N];
    for (int i=0;i<N;i++){
        idx[i] = -1;
    }

    int minidx = INT_MAX;
    for (int i=0;i<n;i++) {
        if (idx[a[i]] != -1){
            minidx = min(minidx, idx[a[i]]);
        }else{
            idx[a[i]] = i;
        }
    }

    if (minidx == INT_MAX){
        cout << "-1\n"; 
    }else{
        cout << minidx + 1 << endl;
    }
    return 0;
}