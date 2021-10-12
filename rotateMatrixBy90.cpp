#include<bits/stdc++.h>
using namespace std;

// Rotate 90* Clockwise
void rotate(vector<vector<int>> &mat){
	int n = mat.size();
	vector<vector<int>> tmp(n, vector<int>(n)); // initialize matrix of size n with 0
    for(int i = 0; i < n; i += 1)
        for(int j = 0; j < n; j += 1){
            tmp[j][n - 1 - i] = mat[i][j];
        }
    swap(tmp, mat);	
}

// rotate by 90* Anti-Clockwise
// void rotate(vector<vector<int>> &mat){
//     int n = mat.size();
//     for(int i = 0; i < n; i++){
//         for(int j = i+1; j < n; j++){
//             swap(mat[i][j], mat[j][i]);
//         }
//     }
//     int rs = 0, re = n-1;
//     while(rs <= re){
//         for(int i = 0; i < n; i++){
//             swap(mat[rs][i], mat[re][i]);
//         }
//         rs++;
//         re--;
//     }
// }

int main(){
    vector<vector<int>> mat = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    for(auto x : mat){
    	for(auto s : x){
    		cout << s << " ";
    	}
    	cout << '\n';
    }
    cout << '\n';
    rotate(mat);
    for(auto x : mat){
    	for(auto s : x){
    		cout << s << " ";
    	}
    	cout << '\n';
    }

    return 0;
}