#include<bits/stdc++.h>
using namespace std;

// first non repeating char in string
// geeksforgeeks
// f

void check(string s){
    vector<int> a(26, -1);
    for(int i = 0; i < s.size(); i++){
        if(a[s[i]-'a'] == -1){
            a[s[i]-'a'] = i;
        }else{
            a[s[i]-'a'] = -2;
        }
    }
    for(int i = 0; i < 26; i++){
        if(a[i] > 0){
            cout << s[a[i]] << '\n';
            break;
        }
    }
}

int main(){
    string s = "geeksforgeeks";
    check(s);

    return 0;
}