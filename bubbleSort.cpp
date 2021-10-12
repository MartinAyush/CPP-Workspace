#include<iostream>
using namespace std;

int main() {
    // Size of array
    int n;
    cin >> n;

    // Array input 
    int arr[n];
    for (int i=0;i<n;i++){
        cin >> arr[i];
    }

    // Algorithm
    for (int i=0;i<n-1;i++){
        for (int j=0;j<n-i-1;j++){
            if (arr[j] > arr[j+1]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // Array output
    cout << "Sorted array is : ";
    for (int i=0;i<n;i++){
        cout << arr[i] << " ";
    }

    return 0;
}