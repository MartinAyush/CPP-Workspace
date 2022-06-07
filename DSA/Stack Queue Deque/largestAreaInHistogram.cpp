#include<bits/stdc++.h>
using namespace std;

// Largest area in histogram

void naive(){
    vector<int> a = {6, 2, 5, 4, 1, 5, 6};
    int ans = 0;
    for(int i = 0; i < a.size(); i++){
        // in every iteration every element being the smallest element;
        int sum = a[i];

        // check left if any element is greater or equal to the a[i] then add a[i] to the sum;
        for(int j = i-1; j >= 0; j--){
            if(a[j] >= a[i]){
                sum += a[i];
            }else{
                break;
            }
        }

        // check right the same way
        for(int k = i+1; k < a.size(); k++){
            if(a[k] >= a[i]){
                sum += a[i];
            }else{
                break;
            }

        }

        ans = max(ans, sum);

    }
    cout << ans << '\n';
}

vector<int> prevSmaller(vector<int> &a){
    stack<int> s;
    int n = a.size();
    vector<int> ans;
    for(int i = 0; i < n; i++){
        while(!s.empty() and a[s.top()] >= a[i]){
            s.pop();
        }
        if(!s.empty()){
            ans.push_back(s.top());
        }else{
            ans.push_back(-1);
        }
        s.push(i);
    }
    return ans;
}

vector<int> nextSmaller(vector<int> &a){
    int n = a.size();
    stack<int> s;
    vector<int> ans;
    for(int i = n-1; i >= 0; i--){
        while(!s.empty() and a[s.top()] >= a[i]){
            s.pop();
        }
        if(!s.empty()){
            ans.push_back(s.top());
        }else{
            ans.push_back(a.size());
        }
        s.push(i);
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

void prevAndNextSmaller(vector<int> &a){
    int n = a.size();
    vector<int> prev = prevSmaller(a);
    vector<int> next = nextSmaller(a);
    for(auto x : prev) cout << x << " ";
    cout << "\n";
    for(auto x : next) cout << x << " ";
    int ans = INT_MIN;
    for(int i = 0; i < n; i++){
        int curr = a[i] * (next[i]-prev[i]-1);
        ans = max(curr, ans);
    }
    cout << endl;
    cout << ans;
}

int main(){
    vector<int> a = {2,1,5,6,2,3};
    prevAndNextSmaller(a);
    return 0;
}