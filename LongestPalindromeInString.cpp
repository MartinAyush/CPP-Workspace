#include<bits/stdc++.h>
using namespace std;

// O(n^3)

string subString(string str){
    vector<string> str2;
    for (int i=0;i<str.size();i++){
        for (int j=1;j<=str.size()-i;j++){
            str2.push_back(str.substr(i, j));
        }
    }
    // check for palindrome
    int maxLen = 0;
    string ans;
    for (auto x:str2){
        if (x.size() > maxLen){
            string temp = x;
            reverse(temp.begin(), temp.end());
            if (temp == x){
                ans = x;
                maxLen = x.size();
            }
        }
    }
    
    return ans;
}


int main() {
    cout << endl;
    int n;
    cin >> n;
    string str;
    for (int i=0;i<n;i++){
        cin >> str;
        cout << subString(str) << endl;
    }
   
    return 0;
}


