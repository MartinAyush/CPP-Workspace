#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	int n, h, x;
	cin >> n >> h >> x;
	int arr[n];
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	bool flag = false;
	for(int a : arr){
		if(a + x >= h){
			flag = true;
		}
	}
	if(flag == true){
		cout << "YES" << '\n';
	}else{
		cout << "NO" << '\n';
	}

    return 0;
}