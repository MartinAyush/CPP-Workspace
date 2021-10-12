#include<bits/stdc++.h>
using namespace std;

int main() {
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;
// test case 
// 3 4 3
// 2 4 1 2
// 8 4 3 6
// 1 7 9 5
// 1 2 3
// 4 5 6
// 7 8 9
// 4 5 6

    int arr1[n1][n2], arr2[n2][n3];
    // arr1
    for (int i=0;i<n1;i++){
        for (int j=0;j<n2;j++){
            cin >> arr1[i][j];
        }
    }
    // arr2
    for (int i=0;i<n2;i++){
        for (int j=0;j<n3;j++){
            cin >> arr2[i][j];
        }
    }

    // initializing ans matrix to zero
    int ans[n1][n3];
    for (int i=0;i<n1;i++){
        for (int j=0;j<n3;j++){
            ans[i][j] = 0;
        }
    }

    // Multiplication
    for (int i=0;i<n1;i++){
        for (int j=0;j<n3;j++){
            for (int k=0;k<n2;k++){
                ans[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }

    // Printing final matrix
    for (int i=0;i<n1;i++){
        for (int j=0;j<n3;j++){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}