#include<bits/stdc++.h>
using namespace std;

long long int fact(int n)
{
    long long int factorial=1;
    for(int i=1;i<=n;i++)
        factorial*=i;
    return factorial;
}

void ranks(string s,long long int factorial)
{
    long long int smaller_count=0,final_count=1;
    for(int i=0;i<s.size();i++)
    {
        for(int j=i+1;j<s.size();j++)
        {
            if(s[j] < s[i])
                smaller_count++;
            else if(s[j] == s[i])
            {
                cout << "0";
                return;
            }
        }
        final_count+=(smaller_count*factorial);
        if(s.size()-1-i!=0)
        factorial = factorial/(s.size()-1-i);
        smaller_count=0;
    }
    cout << final_count%1000003;
}
int main()
 {
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    string s;
	    cin >> s;
	    long long int factorial = fact(s.size()-1);
	    ranks(s,factorial);
	    cout << "\n";
	}
	return 0;
}
