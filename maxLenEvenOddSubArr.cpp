#include <bits/stdc++.h>
using namespace std;

void check(vector<int> arr){
    int count = 1;
    int ans = 1;
    for(int i = 0; i < arr.size(); i++){
        if((arr[i]%2 == 0 && arr[i-1]%2 != 0) || arr[i]%2 != 0 && arr[i-1]%2 == 0){
            count++;
            ans = max(count, ans);
        }else{
            count = 1;
        }
    }
    cout << ans << endl;
}

int main(){
    vector<int> arr = {10, 12, 14, 7, 8};
    check(arr); 
    
    return 0;
}