#include<bits/stdc++.h>
using namespace std;

// check if two string are anagram

bool checkAnagram(string s1, string s2){
    if(s1.size() != s2.size()){
        return false;
    }
    vector<int> arr(26);
    for (int i=0;i<s1.size();i++){
        arr[s1[i] - 'a']++;
    }
    for (int i=0;i<s1.size();i++){
        arr[s2[i] - 'a']--;
    }
    bool flag = true;
    for (int i=0;i<26;i++){
        if(arr[i] > 0){
            flag = false;
        }
    }
    return flag;
}

int main(){
    string s1 = "geeks", s2 = "ekegs";
    checkAnagram(s1, s2) ? cout << "Anagram" : cout << "Not a Anagram";
    return 0;
}