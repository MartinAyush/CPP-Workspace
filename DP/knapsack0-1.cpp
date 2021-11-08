#include<bits/stdc++.h>
using namespace std;

// recursive
// from last either choose element or don't 

int knapsack(int n, int w, vector<int> weight, vector<int> value){
    if(n == 0 or w == 0){
        return 0;
    }
    if(weight[n-1] <= w){
        return max(value[n-1] + knapsack(n-1, w-weight[n-1], weight, value), knapsack(n-1, w, weight, value));
    }else{ // if weight is greater then exclude
        return knapsack(n-1, w, weight, value);
    }
}

int main(){
    vector<int> weight = {5, 4, 6, 3};
    vector<int> value = {10, 40, 30, 50};
    int values = value.size();
    int weights = 10;

    int dp[values+1][weights+1];
    memset(dp, 0, sizeof(dp));
    
    for(int i = 1; i <= values; i++){
        for(int j = 1; j <= weights; j++){
            if(weight[i-1] <= j){
                dp[i][j] = max((value[i-1] + dp[i-1][j-weight[i-1]]), dp[i-1][j]);
            }else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    cout << dp[values][weights] << "\n";
    
    return 0;
}