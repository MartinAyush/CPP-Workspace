#include<bits/stdc++.h>
using namespace std;

// Brian Karningam's Algor
// count no of set bits
// 5 -> 1 0 1 -> 3
void brian(int n){
    int count = 0;
    while(n > 0){
        n = (n&(n-1));
        count++;
    }
    cout << count << endl;
}

// Swap all even and odd bits
unsigned int swapBits(unsigned int x) 
{ 
    // Get all even bits of x 
    unsigned int even_bits = (x & 0xAAAAAAAA); 
  
    // Get all odd bits of x 
    unsigned int odd_bits = (x & 0x55555555); 
  
    even_bits >>= 1; // Right shift even bits 
    odd_bits <<= 1; // Left shift odd bits 
  
    return (even_bits | odd_bits); // Combine even and odd bits 
} 


int main(){
    int x = 3;
    int y = 6;
    unsigned int z = 3;
    
    // AND operator -> * 
    cout << (x&y) << endl;
    
    // OR operator -> +
    cout << (x|y) << endl;
    
    // XOR operator -> different values gives output -> 1 0 = 1
    cout << (x^y) << endl;

    // Left shift operator -> <<  -> (x * 2^y)
    cout << (x<<y) << endl;

    // Right Shift operator -> >>  -> floor(x/2^y)
    cout << (x>>y) << endl;

    // NOT operator
    cout << (~z) << endl;

    return 0;
}