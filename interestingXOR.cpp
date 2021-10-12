#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while(T--){
        ll c;
        cin >> c;
        ll index = 0;
        ll curr = 1;
        ll num1 = 0;
        ll num2 = 0;
        vector<int> bits;
        while(c > 0){
            int k = c&1;
            c = c>>1;
            bits.push_back(k);
        }
        for(int i=1;i<bits.size();i++){
            curr *= 2;

        }
        bool flag = true;
        for(int i=bits.size()-1;i>=0;i--){
            if(bits[i] == 0){
                num2 += curr;
                num1 += curr;
            }else{
                if(flag == true){
                    num2 += curr;
                    flag = false;
                }else{
                    num1 += curr;
                }
            }
            curr/=2;
        }
        ll mul = num2*num1;
        cout << mul << '\n';
    }


    return 0;
}