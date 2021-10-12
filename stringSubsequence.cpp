#include<bits/stdc++.h>
using namespace std;

void stringSubseq(string s, string ss){
    if(s.empty()){
        cout << ss << " ";
        return;
    }
    stringSubseq(s.substr(1), ss+s[0]);
    stringSubseq(s.substr(1), ss);
}

void getsubseq(string s, string ss, vector<string> &ans){
    if(s.empty()){
        ans.push_back(ss);
        return;
    }
    getsubseq(s.substr(1), ss+s[0], ans);
    getsubseq(s.substr(1), ss, ans);
}

// method 2
// set<string> ans;

// for(int i = 0; i < s.size(); i++){
//     for(int j = i; j < s.size(); j++){
//         string ss = s.substr(i, j+1);
//         ans.insert(ss);
//     }
// }

int main(){
    string s = "abc";
    vector<string> ans;
    getsubseq(s, "", ans);
    for(auto x : ans){
        cout << x << " ";
    }
    return 0;
}