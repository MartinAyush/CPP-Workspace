#include<bits/stdc++.h>
using namespace std;

// Count distint element in every k size window
// no of ans = n - k + 1

void naive(vector<int> a, int k){
    for(int i = 0; i < a.size()-k+1; i++){
        unordered_set<int> s;
        for(int j = 0; j < k; j++){
            // cout << a[i+j] << " ";
            s.insert(a[i+j]);
        }
        cout << '\n' << s.size() << "\n";
    }
}

void optimal(vector<int> a, int k){
    int n = a.size();
    unordered_map<int, int> m; // contains window element

    // first window
    for(int i = 0; i < k; i++){
        m[a[i]]++;
    }
    cout << m.size() << " ";
    // second to n-k+1 windows
    for(int i = 1; i < n-k+1; i++){
        m[a[i-1]]--;
        if(m[a[i-1]] <= 0){
            m.erase(m[a[i-1]]);
        }
        m[a[i+k-1]]++; 
        cout << m.size() << " ";
    }

}

int main(){
    vector<int> a = {10, 10, 5, 3, 10, 5};
    // vector<int> a =  {10, 20, 20, 10, 30, 40, 10};
    // vector<int> a = {10, 10, 10, 10};
    // int k = 3;
    int k = 4;
    // ans = 2 3 4 3
    optimal(a, k);

    return 0;
}