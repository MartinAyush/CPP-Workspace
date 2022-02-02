#include<bits/stdc++.h>
using namespace std;

// Largest area in histogram

void naive(){
    vector<int> a = {2,1,5,6,2,3};
    int ans = 0;
    for(int i = 0; i < a.size(); i++){
        // in every iteration every element being the smallest element;
        int sum = a[i];

        // check left if any element is greater or equal to the a[i] then add a[i] to the sum;
        for(int j = i-1; j >= 0; j--){
            if(a[j] >= a[i]){
                sum += a[i];
            }else{
                break;
            }
        }

        // check right the same way
        for(int k = i+1; k < a.size(); k++){
            if(a[k] >= a[i]){
                sum += a[i];
            }else{
                break;
            }

        }

        ans = max(ans, sum);

    }
    cout << ans << '\n';
}

int main(){
    vector<int> a = {6, 2, 5, 4, 1, 5, 6};
    naive();
    return 0;
}