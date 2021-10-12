#include<bits/stdc++.h>
using namespace std;

// Largest word in a sentense

int main() {
    int n;
    cin >> n;
    char a[n+1];
    cin.getline(a, n);

    int i=0, currLen=0, maxLen=0;
    while (i < n){
        if (a[i] == " " || a[i] == "\0"){
            if (currLen > maxLen){
                maxLen = currLen;
            }
            currLen = 0;
        }else{
            currLen++;
        }

        if (a[i] == "\0"){
            break;
        }
        i++;
    }

    cout << "MaxLen is : " << maxLen << endl;
    return 0;
}