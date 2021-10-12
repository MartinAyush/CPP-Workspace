#include<bits/stdc++.h>
using namespace std;

struct Job{
    int dead;
    int profit;
};

bool cmp(Job a, Job b){
    return a.profit > b.profit;
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);  
    #endif

    // vector<Job> a = {{2, 50}, {2, 60}, {3, 20}, {3, 30}};
    vector<Job> a = {{2, 100}, {1, 50}, {2, 10}, {1, 20}, {3, 30}};
    int n = a.size();

    sort(a.begin(), a.end(), cmp);

    int sum = 0;
    vector<bool> slot(n, false);
    for(int i = 0; i < n; i++){
        // from deadline to 0
        for(int j = a[i].dead-1; j >= 0; j--){
            // if free slot found
            if(slot[j] == false){
                slot[j] = true;
                sum += a[i].profit;
                break;
            }
        }
    }

    cout << sum << '\n';

    return 0;
}