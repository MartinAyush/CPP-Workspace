#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> a = {3, 2, 1, 5, 6, 4};
    sort(a.begin(), a.end());
    for (auto x : a)
        cout << x << " ";
    return 0;
}