#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout <<"Enter size of array: ";
    cin>> n;

    int arr[n];

    for (int i=0;i<n;i++){
        cin >> arr[i];
    }

    int sum=0;

    for (int j=0;j<n;j++){
        sum += arr[j];
    }

    cout << "Sum is : " << sum << endl;
    return 0;
}