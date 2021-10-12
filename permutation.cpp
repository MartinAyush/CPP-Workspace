#include<bits/stdc++.h>
using namespace std;

int main() {
    string s = "string";
    string ans = s;
    sort(s.begin(), s.end());

    vector<string> ss;

    do{
        ss.push_back(s);
    }while(next_permutation(s.begin(), s.end()));
    
    for(int i=1;i<ss.size();i++){
        if(ans == ss[i]){
            cout << i+1  << endl;
        }
    }   
    float ticks = clock();
    cout << ticks/CLOCKS_PER_SEC << " sec";
    return 0;
}