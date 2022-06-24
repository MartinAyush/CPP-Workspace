#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 15};
    int n = a.size();
    int tt = 18;

    /*
    [[1, 2, 15]]
    [3, 7, 8]
    [4, 6, 8]
    [5, 6, 7]]
    */

    // Brute force -> use 3 loops

    // efficient approach (array is sorted else sort first) -> select element and solve using two pointer approach

    for (int i = 0; i < n; i++)
    {
        // two pointer
        int start = i + 1;
        int end = n - 1;
        while (start < end)
        {
            if (a[start] + a[end] + a[i] == tt)
            {
                cout << a[i] << " " << a[start] << " " << a[end] << "\n";
                start++;
                end--;
            }
            else if (a[start] + a[end] + a[i] > tt)
            {
                end--;
            }
            else
            {
                start++;
            }
        }
    }

    return 0;
}