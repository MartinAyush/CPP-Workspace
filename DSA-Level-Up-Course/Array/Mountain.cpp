#include <bits/stdc++.h>
using namespace std;

int main()
{
    // ans = 9;
    //                     ------------------------
    vector<int> a = {6, 5, 1, 2, 3, 4, 5, 4, 3, 2, 0, 1, 2, 3, -2, 4};
    int n = a.size();
    // find peak and move forward and backward

    int ans = INT_MIN;
    for (int i = 1; i < n - 1; i++)
    {
        // find peak
        if (a[i] > a[i - 1] && a[i] > a[i + 1])
        {
            int count = 0;
            // count backward
            cout << "backward ";
            for (int j = i - 1; j >= 1; j--)
            {
                if (a[j] > a[j - 1])
                {
                    count++;
                    cout << a[j] << " ";
                }
            }
            // count forward
            cout << "fordward ";
            for (int j = i + 1; j < n - 1; j++)
            {
                if (a[j] > a[j + 1])
                {
                    count++;
                    cout << a[j] << " ";
                }
            }
            ans = max(ans, count);
        }
    }
    cout << ans;
    return 0;
}