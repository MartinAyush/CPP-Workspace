#include<bits/stdc++.h>
using namespace std;

// Previous greater element
// next greater element -> run reverse loop and reverse ans;

int main(){	
	vector<int> a = {15, 10, 18, 12, 4, 6, 2, 8};
	stack<int> s;
	for(int i = 0; i < a.size(); i++){
		while(!s.empty() && s.top() < a[i]){
			s.pop();
		}
		int ans = (s.empty()) ? -1 : s.top();
		cout << ans << " ";
		s.push(a[i]);
	}
	return 0;
}