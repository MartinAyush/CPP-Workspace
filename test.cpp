#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<vector<int>> arr(3, vector<int>(3, 0));
    for(int i = 0; i < arr.size(); i++){
        for(int j = 0; j < arr[0].size(); j++){
            if(i == 1 && j == 1)
                arr[1][1] = 4;
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}