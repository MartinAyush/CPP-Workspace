#include<bits/stdc++.h>
using namespace std;

void fastinout(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
}

void solve(int participant, int problems, vector<int> points, vector<string> problem){
    for(int i=0;i<participant;i++){
        long long sum = 0;
        for(int j=0;j<problems;j++){
            if(problem[i][j] == '1'){
                sum += points[j];
            }
        }
        cout << sum << endl;
    }
}

int main() {
    fastinout();
    int T;
    cin >> T;
    while(T--){
        int n, k;
        cin >> n >> k;
        vector<int> points(k);
        for(int i=0;i<k;i++){
            cin >> points[i];
        }
        vector<string> problemsolved(n);
        for(int i=0;i<n;i++){
            cin >> problemsolved[i];
        }
        solve(n, k, points, problemsolved);
    }
    return 0;
}