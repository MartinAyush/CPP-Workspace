#include<bits/stdc++.h>
using namespace std;

// Finding number of digits in a number
// 123 = 3
// ans = floor(log10(n)+1);


// AP -> Arithmetic Progrssion
// 2 4 6 8 10 12 ...
// ans = n/2 * (2a+(n-1)d);
// a = first term
// d = common difference
// n = no of terms


// GP -> Geometric Progression
// 2 4 8 16 32 ... 
// a ar^1 ar^2 
// r = 2nd term / 1st term
// ans = a * (1 - r^n-1) / 1 - r


// Quadratic equations
// d = discriminant
// d = b^2 - 4 * a * c
// if d < 0 we have imaginary roots
// if d == 0 we have 2 equal roots
// if d > 0 we have 2 distinct roots
// x = roots of equation
// x = -b +- sqrt(b^2 - 4*a*c) / 2*a


// Median 
// sort range and pick middle number
// 4 1 7 -> 1 4 7 || ans = 4
// if 2 mid values then mean of 2 numbers 


// Prime numbers
// no's divided by itself and 1
// Prime no can be represented in form (6*n + 1 || 6*n - 1) except 2 and 3
// eg = 5 -> 6*1 - 1 


// Permutation 
// arrangements of r things that can be done out of n things 
// nPr = fact(n) / fact(n-r)


// Combinations
// selection of r things that can be done out of r things
// nCr = fact(n) / fact(r) * fact(n - r)
