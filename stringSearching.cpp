#include<bits/stdc++.h>
using namespace std;

int main(){
	string s = "ABDABCBABC";
	string ss = "ABC";	

	int n = ss.size(); // size of pattern
	
	for(int i = 0; i < s.size(); i++){
		string temp = s.substr(i, n);
		if(temp == ss){
			cout << i << " ";   // prints index of first char of pattern in the string
		}
	}

	return 0;
}