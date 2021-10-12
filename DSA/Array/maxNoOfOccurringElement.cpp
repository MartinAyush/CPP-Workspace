#include<bits/stdc++.h>
using namespace std;

// Find element with max occurrence's in array
// Randomization Method

int main(){
    int arr[] = {3,1,3,3,2};
    int n = sizeof(arr)/sizeof(arr[0]); 
    
    int ans = 0, count = 0;
    for(int i=0;i<n;i++){
        if(count == 0){
            ans = arr[i];
        }
        if(ans == arr[i]){
            count++;
        }else{
            count--;
        }
    }
    cout << ans << endl;

    return 0;
}

