#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin>> n;

    int arr[n];

    for (int i=0;i<n;i++){
        cout << "Enter element of array: ";
        cin >> arr[i];
    }

    int maxNo = INT_MIN;
    int minNo = INT_MAX;

    for (int j=0;j<n;j++) {
        maxNo = max(maxNo, arr[j]);
        minNo = min(minNo, arr[j]);
    }

    cout << "Max is : " << maxNo << endl;
    cout << "Min is : " << minNo << endl;


    return 0;
}
