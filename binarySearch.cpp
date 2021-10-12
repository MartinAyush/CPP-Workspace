#include<bits/stdc++.h>
using namespace std;

// worst case complexity --> O(log(n))

int binarySearch(int arr[], int n, int key) {
    int start=0, end=n;
    while (start <= end) {
        // Find mid
        int mid = (start + (end-start)) / 2;

        if (arr[mid] == key){
            return mid;
        }else if(arr[mid] > key){
            end = mid - 1;
        }else{
            start = mid + 1;
        }
    }
    return -1;
}


int main() {

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);  
    #endif
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    for (int i=0;i<n;i++) {
        cout << "Enter elements of array: ";
        cin >> arr[i];
    }

    int key;
    cout << "Enter element to be found in array: ";
    cin >> key;

    cout << "Element is present at position : " << binarySearch(arr, n, key) << endl;

    return 0;
}