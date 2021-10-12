#include<bits/stdc++.h>
using namespace std;

int main() {
    int row, column, element;
    cin >> row >> column >> element;
    int a[row][column];
    for (int i=0;i<row;i++){
        for (int j=0;j<column;j++){
            cin >> a[i][j];
        }
    }

    // searching in matrix
    bool flag = false;
    int r=0, c=column-1; // initializing where to start
    while(r < column && c >= 0){
        if (a[r][c] == element){
            flag = true;
        }
        (a[r][c] > element) ? c-- : r++;
    }
    
    if (flag){
        cout << "Element found!";

    }else{
        cout << "Element not found!";
    }
    return 0;
}


//  bool searchMatrix(vector<vector<int>>& matrix, int target) {
//         if(matrix.size() == 0){
//             return false;
//         }
        
//         int row = matrix.size();
//         int coloumn = matrix[0].size();
        
//         int r = 0;
//         int c = coloumn-1;
        
//         while(r >= 0 && c >= 0 && c < coloumn && r < row){
//             if(matrix[r][c] == target){
//                 return true;
//             }
//             if(matrix[r][c] > target){
//                 c--;
//             }else{
//                 r++;
//             }
//         }
//         return false;
//     }