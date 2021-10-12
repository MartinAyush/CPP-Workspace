#include<bits/stdc++.h>
using namespace std;
// Max char in sentense
int main() {
    string s = "this is the most common interview question";
    

    // Make temp array of size 26 ans put val 0
    int arr[26];
    for (int i=0;i<26;i++){
        arr[i] = 0;
    }

    // iterate over s and update temp array indexes
    for (int i=0;i<s.length();i++){
        arr[s[i] - 'a']++;   // temp[string[index] - 'a']++
    }   

    char ans = 'a';
    int maxF = 0;
    for (int i=0;i<26;i++){
        if (arr[i] > maxF){
            maxF = arr[i];
            ans = i + 'a';
        }
    }

    cout << ans << " " << maxF << endl;
    return 0;
}
