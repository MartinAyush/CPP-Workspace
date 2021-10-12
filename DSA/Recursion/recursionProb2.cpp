#include<bits/stdc++.h>
using namespace std;

// Reverse a string using Recursion 
// void rev(string s){
//     if (s.length() == 0){
//         return;
//     }
//     string rem = s.substr(1);
//     rev(rem);
//     cout << s[0];
//     return;
// }

// Replace pi with 3.14
// void rep(string s){
//     if (s.length() == 0){
//         return;
//     }
//     if (s[0] == 'p' && s[1] == 'i'){
//         cout << 3.14;
//         rep(s.substr(2));
//     }else{
//         cout << s[0];
//         rep(s.substr(1));
//     }
// }

// Tower of hanoi
void toi(int n, char start, char dest, char helper){
    if (n == 0){
        return;
    }
    toi(n-1, start, helper, dest);
    cout << "Move From " << start << " TO " << dest << endl;
    toi(n-1, helper, dest, start);
    return;
}

// Remove all duplicates from string
// string removeDuplicates(string s){
//     if (s.length() == 0){
//         return "";
//     }
//     char ch = s[0];
//     string ans = removeDuplicates(s.substr(1));
//     if (ch == ans[0]){
//         return ans;
//     }
//     return (ch+ans);
// }

// shift x to the end
// string markX(string s){
//     if (s.length() == 0){
//         return "";
//     }
//     char ch = s[0];
//     string ans = markX(s.substr(1));
//     if (ch == 'x'){
//         return (ans+ch);
//     }
//     return ch+ans;
// }

// string subsequence
// void subseq(string s, string ans){ // CBA 
//     if (s.length() == 0){
//         cout << ans << endl;
//         return;
//     }
//     char ch = s[0]; 
//     string rem = s.substr(1);

//     subseq(rem, ans);  
//     subseq(rem, ans+ch);
//     return;
// }

// void subseq(string s, string ans){
//     if (s.length() == 0){
//         cout << ans << endl;
//         return;
//     }

//     char ch = s[0]; // A // B
//     int code = ch; // 65 // 66
//     string rem = s.substr(1); // "", A, B, AB

//     subseq(rem, ans);
//     subseq(rem, ans + ch);
//     subseq(rem, ans + to_string(code));
//     return;
// }

int main() {
    // 1
    // string s = "binod";
    // rev(s);

    // 2
    // rep("pippxxppiixipi");
    
    // 3
    toi(3, 'A', 'C', 'B');

    // 4
    // cout << removeDuplicates("aaaabbbeeesss") << endl;

    // 5
    // cout << markX("axxbdxcefxhix") << endl;

    // 6
    // subseq("ABC", "");
    // cout << endl;

    // 7 
    // subseq("AB", "");
    // cout << endl;


    return 0;
}