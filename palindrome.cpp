#include<bits/stdc++.h>
using namespace std;

// check palindrome 

int main() {
    int n;
    cin >> n;
    char a[n+1];
    cin >> a;
    
    bool flag = true;
    for (int i=0;i<n;i++){
        if (a[i] != a[n-1-i]){
            flag = false;
            break;
        }
    }
    
    flag ? cout << "Palindrome!" : cout << "Not a Palindrome";

    return 0;
}