#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> a = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    int n = a.size();

    vector<int> left;
    left.push_back(a[0]);
    for (int i = 1; i < n; i++)
    {
        left.push_back(max(left.back(), a[i]));
    }

    vector<int> right(n);
    right[n - 1] = a[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        right[i] = max(right[i + 1], a[i]);
    }

    int total = 0;
    for (int i = 0; i < n; i++)
    {
        total += min(left[i], right[i]) - a[i];
    }

    cout << total;

    return 0;
}