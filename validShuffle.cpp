#include<bits/stdc++.h>
using namespace std;

bool isShuffle(char a[], char b[], char c[]){
    while (*c != 0){
        if (*a == *c){
            *a++;
        }else if(*b == *c){
            b++;
        }else{
            return false;
        }
        c++;
    }
    if (*a || *b){
        return false;
    }
    return true;
}


int main() {
    char A[] = "AB"; 
	char B[] = "12"; 
	char C[] = "A12B"; 
        
    if(isShuffle(A, B, C)){
        cout << C << " is a valid shuffle of " << A << " and " << B << endl;
    }else{
        cout << C << " is not a valid shuffle of " << A << " and " << B << endl;
    }

    return 0;
}