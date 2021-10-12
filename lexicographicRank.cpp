#include<bits/stdc++.h>
using namespace std;

int fact(int n){
    int ans = 1;
    for(int i=2;i<=n;i++){
        ans *= i;
    }
    return ans;
}

void check(string s){
    vector<int> count(256);
    int n = s.size(); 
    int mul = fact(n);
    int ans = 1;

    for(int i=0;i<n;i++){
        count[s[i]]++;
    }

    // for(int i=0;i<256;i++){
    //     if(count[i] > 1){
    //         cout << 0 << endl;
    //         return;
    //     }
    // }

    for(int i=1;i<256;i++){
        count[i] += count[i-1];
    }

    for(int i=0;i<n;i++){
        mul = mul/(n-i);
        ans += count[s[i] - 1] * mul;
        for(int j=s[i];j<256;j++){
            count[j]--;
        }
    }
    
    cout << ans << endl;
}

int main() {
    string s = "string";
    check(s);

    return 0;
}