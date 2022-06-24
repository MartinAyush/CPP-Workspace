#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> a = {5, 6, 1, 2, 3, 4, 5, 4, 3, 2, 0, 1, 2, 3, -2, 4};
    int n = a.size();
    int ans = INT_MIN;
    for (int i = 1; i < n - 1;)
    {
        if (a[i] > a[i - 1] && a[i] > a[i + 1])
        {
            int count = 1;

            // backwards
            int j = i;
            while (j >= 1 && a[j] > a[j - 1])
            {
                count++;
                j--;
            }

            // forward
            while (i < n - 1 && a[i] > a[i + 1])
            {
                count++;
                i++;
            }

            ans = max(ans, count);
        }
        else
        {
            i++;
        }
    }
    cout << ans;
    return 0;
}