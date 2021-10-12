#include<bits/stdc++.h>
using namespace std;

// Write a code to check whether one string is a rotation of another

int main() {
    string str1 = "ABACD";
    string str2 = "CDABA";
    string temp = str1 + str2;
    vector<string> count;
    int n = temp.size();
    for (int i=0;i<n;i++){
        for (int j=1;j<=n-i;j++){
            count.push_back(temp.substr(i, j));  // O(n^3)
        }
    }

    for (int i=0;i<count.size();i++){
        if (count[i] == str2){
            cout << "str1 and str2 are rotation of each other.";
        }
    }
        
    return 0;
}