#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string str;
    cin >> str;
    if (str.empty())
    {
        cout << -1;
        return 0;
    }
    unordered_map<char, int> m;
    for (int i = 0; i < n; i++)
    {
        m[str[i]]++;
    }
    cout << m.size();

    return 0;
}