#include<iostream>
using namespace std;

// Checking if a no is Prime

int main() {
    int n;
    cout << "Enter any number: ";
    cin >> n;
    bool flag = true;
    for (int i=2;i*i<n;i++){
        if (n%i==0){
            flag = false;
            break;
        }
    }
    if (flag){
        cout << "Prime no" << endl;
    }else{
        cout << "Not a prime no\n";
    }
    return 0;
}
