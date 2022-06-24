#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> a = {10, 5, 2, 3, -6, 9, 11};
    int s = 4;
    // ans [10, -6]

    // Brute Force
    // for (int i = 0; i < a.size(); i++)
    // {
    //     for (int j = i + 1; j < a.size(); j++)
    //     {
    //         if (a[i] + a[j] == s)
    //         {
    //             cout << a[i] << " " << a[j] << "\n";
    //         }
    //     }
    // }

    // Efficient Approach
    unordered_set<int> ss;
    for (int i = 0; i < a.size(); i++)
    {
        if (ss.find(s - a[i]) != ss.end())
        {
            cout << s - a[i] << a[i] << "\n";
        }
        ss.insert(a[i]);
    }

    return 0;
}