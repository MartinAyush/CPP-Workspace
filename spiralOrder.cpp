#include <bits/stdc++.h>
using namespace std;

int main()
{
    int row, column;
    cin >> row >> column;

    int a[row][column];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cin >> a[i][j];
        }
    }

    // Spiral Order Traversal

    int rowStart = 0;
    int columnStart = 0;
    int rowEnd = row - 1;
    int columnEnd = column - 1;

    // test case
    // 5 6
    // 1 5 7 9 10 11
    // 6 10 12 13 20 21
    // 9 25 29 30 32 41
    // 15 55 59 63 68 70
    // 40 70 79 81 95 105

    // ans
    // 1 5 7 9 10 11 21 41 70 105 95 81 79 70 40 15 9 6 10 12 13 20 32 68 63 59 55 25 29 30 29.

    while (rowStart <= rowEnd && columnStart <= columnEnd)
    {
        // left to right
        for (int i = columnStart; i <= columnEnd; i++)
        {
            cout << a[rowStart][i] << " ";
        }
        rowStart++;

        // top to down
        for (int i = rowStart; i <= rowEnd; i++)
        {
            cout << a[i][columnEnd] << " ";
        }
        columnEnd--;

        // right to left
        if (rowStart <= rowEnd)
        {
            for (int i = columnEnd; i >= columnStart; i--)
            {
                cout << a[rowEnd][i] << " ";
            }
            rowEnd--;
        }
        // bottom to up
        if (columnStart <= columnEnd)
        {
            for (int i = rowEnd; i >= rowStart; i--)
            {
                cout << a[i][columnStart] << " ";
            }
            columnStart++;
        }
    }
    return 0;
}