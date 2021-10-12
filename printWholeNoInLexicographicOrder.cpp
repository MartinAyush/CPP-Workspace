#include<bits/stdc++.h>
using namespace std;

/*
0
1
10
11
12
13
2
3
4
5
6
7
8
9
*/

// dictionary order
// A then AA 
// b then BA

void lexico(int i, int n){
    if(i > n) return;
    cout << i << "\n";
    for(int j = (i==0)?1:0; j <= 9; j++)
        lexico(i*10+j, n);

}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);  
    #endif

    lexico(0, 13);

    return 0;
}