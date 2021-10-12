#include<bits/stdc++.h>
using namespace std;

// Product Array Puzzle

vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
   
    //code here 
    
    // Prefix Product  
    vector<long long int> pref_product;
    pref_product.push_back(1);
    for(auto x : nums){
        pref_product.push_back(pref_product.back() * x);
    }
    
    // Suffix Product
    vector<long long int> suff_product(n+1);
    suff_product[n] = 1;
    for(int i=n-1;i>=0;--i){
        suff_product[i] = suff_product[i+1] * nums[i];
    }
    
    vector<long long int> ans(n);
    for(int i=0;i<n;i++){
        ans[i] = pref_product[i] * suff_product[i+1];
    }
    
    return ans;
}
