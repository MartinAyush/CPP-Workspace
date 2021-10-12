#include<bits/stdc++.h>
using namespace std;

// queue question
// Generating number in given range in sorted order

int main(){
    queue<string> q;
    q.push("5");
    q.push("6");
    int n = 10;
    for(int i = 0; i < n; i++){
        string x = q.front();
        cout << x << " ";
        q.pop();
        q.push(x+"5");
        q.push(x+"6");
    }

    return 0;
}