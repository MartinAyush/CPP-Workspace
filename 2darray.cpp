#include<bits/stdc++.h>
using namespace std;

int main() {
    int row, coloum;
    cin >> row >> coloum;

    int arr[row][coloum];
    for (int i=0;i<row;i++){
        for (int j=0;j<coloum;j++){
            cin >> arr[i][j];
        }
    }

    // Printing Matrix

    for (int i=0;i<row;i++){
        for (int j=0;j<coloum;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    int x;
    cin >> x;
    bool flag = false;
    for (int i=0;i<row;i++){
        for (int j=0;j<coloum;j++){
            if (arr[i][j] == x){
                cout << i << " " << j << endl;
                flag = true;
            }
        }
    }   

    if (flag){
        cout << "Element found!" << endl;
    }else{
        cout << "Element not found!" << endl;
    }

    return 0;
}