#include<iostream>
using namespace std;

// Pascal triangle

int fact(int n){
    int sum=1;
    for (int i=2;i<=n;i++){
        sum *= i;
    }
    return sum;
}

int ncr(int n, int r){
    int ans;
    ans = fact(n) / (fact(r) * fact(n-r));
    return ans;
}

int main() {
    int n;
    cin>>n;
    for (int i=0;i<n;i++){
        for (int j=0;j<=i;j++){
            cout << ncr(i, j) << " ";
        }
        cout << endl;
    }
    return 0;
}