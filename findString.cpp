#include<bits/stdc++.h> 
using namespace std;

// find string is present in a given string

bool check(string s1, string s2){
    s1 = s1+s1; // abcdabcd
    if(s1.find(s2) != string::npos){
        return true;
    }
    return false;
}

int main() {
    string s1 = "abcd";
    string s2 = "cdab";
    cout << check(s1, s2);

    return 0;
}