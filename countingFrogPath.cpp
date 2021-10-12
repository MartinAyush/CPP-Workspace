#include<bits/stdc++.h>
using namespace std;

void solve(int X, int Y, int sqSide, int time){ 
	int ans = 0;
	for (int i=X;i<(X+sqSide+1);i++){ 
		for (int j=Y;j<(Y+sqSide+1);j++){
			if (i+j <= time){
				ans++;
			}
		}
	}
	cout << ans;
}

int main() {
	int x, y, s, t;
	cin >> x >> y >> s >> t;

	solve(x, y, s, t);

	return 0;
}