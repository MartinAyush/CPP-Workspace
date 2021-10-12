#include<iostream>
using namespace std;

// Pythagorian Triplet
// pow(h, 2) = pow(b, 2) + pow(p, 2)

bool check(int x, int y, int z){
    int a, b, c;
    a = max(x, max(y, z));
    if (x == a){
        b = y;
        c = z;
    }else if (y == a) {
        b = x;
        c = z;
    }else{
        b = x;
        c = y;
    }

    if (a*a == b*b + c*c) {
        return true; 
    }else{
        return false;
    }
}


int main() {

    int x,y,z;
    cin >> x >> y >> z;
    
    if (check(x,y,z)){
        cout << "Pythagorian Triplet";
    }else{
        cout << "Not a Pythagorian Triplet";
    }

    return 0;
}