#include <bits/stdc++.h>
using namespace std;

void reve(vector<int> &arr, int start, int end)
{
    while (start < end)
    {
        swap(arr[start++], arr[end--]);
    }
}

void leftToRight(vector<int> &a, int n, int k)
{
    reve(a, 0, k - 1);
    reve(a, k, n - 1);
    reve(a, 0, n - 1);
}

int main()
{
    int n, k;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> k;

    leftToRight(arr, n, k);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}