#include<bits/stdc++.h>
using namespace std;

// find all permutations of a string
// not in lexicographic order

void check(string s){
    int n = s.size();
    int m = pow(2, n);
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(i&(1<<j)){
                cout << s[j];
            }
        }
        cout << '\n';
    }
}

int main(){
    string s = "abc";
    check(s);

    return 0;
}