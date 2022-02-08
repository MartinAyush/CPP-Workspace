#include<bits/stdc++.h>
using namespace std;

// Ninja's Training

int check(vector<vector<int>> &points, int day, int last, vector<vector<int>> &dp){
    if(day == 0){
        int ans = 0;
        for(int i = 0; i < 3; i++){
            if(i != last){
                ans = max(ans, points[day][i]);
            }
        }
        return ans;
    }
    if(dp[day][last] != -1){
        return dp[day][last];
    }
    int ans = 0;
    for(int i = 0; i < 3; i++){
        if(i != last){
            int pts = points[day][i] + check(points, day-1, i);
            ans = max(ans, pts);
        }
    }
    return dp[day][last] = ans;
}

int main(){
    vector<vector<int>> points = {{1, 2, 5 }, {3, 1, 1}, {3, 3, 3}};
    int n = points.size()-1;
    vector<vector<int>> dp(n, vector<int>(4, -1));
    cout << check(points, n, 3, dp);

    return 0;
}