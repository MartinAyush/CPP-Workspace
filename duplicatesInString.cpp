#include<bits/stdc++.h>
using namespace std;

int main() {
    int n = 256;
    int count[n] = {0};
    string str = "test string";

    for (int i=0;i<str.size();i++){
        count[int(str[i])]++;
    }

    for (int i=0;i<n;i++){
        if (count[i] > 1){
            cout << char(i) << " " << count[i] << endl;
        }
    }

    // cout << int(str[1]) << endl;
    float ticks = clock();
    cout << ticks/CLOCKS_PER_SEC << endl;
    return 0;
}
