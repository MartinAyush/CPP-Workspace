#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> a = {1, 9, 3, 0, 18, 5, 2, 4, 10, 7, 12, 6};
    unordered_set<int> s;
    for (int x : a)
    {
        s.insert(x);
    }
    int n = a.size();
    int ans = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (s.find(a[i] - 1) != s.end())
        {
            continue;
        }
        else
        {
            int count = 1;
            int curr = a[i];
            while (s.find(curr + 1) != s.end())
            {
                count++;
                curr += 1;
            }

            ans = max(count, ans);
        }
    }
    cout << ans;
    return 0;
}