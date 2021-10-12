#include<bits/stdc++.h>
using namespace std;

// linearithmic time complexity --> O(n) 
// search pattern and anagram in string
// geeksforgeeks 
// egek --> 1

bool same(vector<int> a, vector<int> b){
    for(int i=0;i<a.size();i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

bool check(string s1, string s2){
    vector<int> countText(256);
    vector<int> countPat(256);

    // window creation
    for(int i=0;i<s2.size();i++){
        countText[s1[i]]++;
        countPat[s2[i]]++;
    }
    // checking window of size 4
    for(int i=s2.size();i<s1.size();i++){
        if(same(countText, countPat)){
            return true;
        }
        countText[s1[i]]++; // adding another char to the window
        countText[s1[i - s2.size()]]--; // removing start char from the window
    }
    return false;
}

int main() {
    string s1 = "geeksforgeeks";
    string s2 = "egek";
    cout << check(s1, s2);

    return 0;
}