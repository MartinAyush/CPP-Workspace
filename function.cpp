#include<iostream>

using namespace std;


int add(int a, int b){
    int sum;
    sum = a + b;
    return sum;
}


int main() {

    int a,b;
    cout << "Enter any Two Numbers : ";
    cin >> a >> b;
    cout << add(a,b);

    return 0;
}
