#include<iostream>
using namespace std;

int giveAscaii(char c) {
    int a;
    a = c;
    return a;
}

int main() {
    char c;
    cin >> c;
    cout << giveAscaii(c);
    return 0;
}