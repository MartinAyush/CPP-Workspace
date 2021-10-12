#include<bits/stdc++.h>
using namespace std;

// Pure Recursion
void perm(string s, string ss){
    int n = s.size();
    if(n == 0){
        cout << ss << '\n';
        return;
    }
    for(int i = 0; i < n; i++){
        char ch = s[i];
        string rem = s.substr(0, i) + s.substr(i+1);
        perm(rem, ss+ch);
    }
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);  
    #endif

    perm("ABC", "");

    return 0;
}