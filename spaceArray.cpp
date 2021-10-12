#include<bits/stdc++.h>
using namespace std;

void solve() {
    long long N;
    cin >> N;
    long long a[N];
    for(long long i = 0; i < N;i++){
        cin >> a[i];
    }
    sort(a, a+N);
    long long count = 0;
    int flag = 0;
    for(long long i = 0; i < N; i++){
        if(a[i] > i+1){
            cout << "Second\n";
            flag = 1;
            break; 
        }else{
            count += i+1-a[i];
        }
    }
  	if(flag == 0){
		if(count % 2 == 0){
			cout << "Second\n";
		}else{
			cout << "First\n";

		}
	}
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long T;
	cin >> T;
	while(T--){
		solve();
	}
    return 0;
}