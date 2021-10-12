#include<bits/stdc++.h>
using namespace std;

long long int factorial(long long int n){
    long long int ans = 1;
    for(long long int i = 2; i <= n; i++){
        ans *= i;
    }
    return ans;
}

int main(){
    cout << factorial(5) << "\n";

    return 0;
}