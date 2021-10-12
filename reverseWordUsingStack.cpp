#include<bits/stdc++.h>
using namespace std;

void reverseString(string str){
    stack<string> s;

    for(int i=0;i<str.length();i++){
        string ans = "";
        while(str[i] != ' ' && i < str.length()){
            ans += str[i];
            i++;
        }
        s.push(ans);
    }
    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }
}

int main() {
    string s = "Hey, how are you doing?";
    reverseString(s);

    return 0;
}