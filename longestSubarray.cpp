#include<bits/stdc++.h>
using namespace std;

// 10 7 4 6 8 10 11
// -3 -3 2 2 2 1

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i=0;i<n;i++){
        cin >> arr[i];
    }

    int ans = 2;
    int pd = arr[1] - arr[0];
    int curr = 2;
    int j = 2;

    while (j < n){
        if (pd == arr[j] - arr[j-1]){
            curr++;
        }else{
            pd = arr[j] - arr[j-1];
            curr = 2;
        }
        ans = max(ans, curr);
        j++;
    }


    cout << "ans is : " << ans << endl;



    return 0;
}