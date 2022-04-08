#include <bits/stdc++.h>
using namespace std;
void findLargest(int **arr, int n, int m)
{
    // Write your code here
    int csum = 0, cmax = 0, ci = 0, rsum = 0, rmax = 0, ri = 0;
    for (int i = 0; i < n; i++)
    {
        rsum = 0;
        for (int j = 0; j < m; j++)
        {
            rsum += arr[i][j];
        }
        if (rsum > rmax)
        {
            rmax = rsum;
            ri = i;
        }
    }
    for (int i = 0; i < m; i++)
    {
        csum = 0;
        for (int j = 0; j < n; j++)
        {
            csum += arr[j][i];
        }

        if (csum > cmax)
        {
            cmax = csum;
            ci = i;
        }
    }
    if (n == 0 || m == 0)
    {
        cout << "row 0 -2147483648" << endl;
    }
    else
    {
        if (rmax >= cmax)
        {
            cout << "row " << ri << " " << rmax << endl;
        }
        else
        {
            cout << "column " << ci << " " << cmax << endl;
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int row, col;
        cin >> row >> col;

        int **input = new int *[row];
        for (int i = 0; i < row; i++)
        {
            input[i] = new int[col];
            for (int j = 0; j < col; j++)
            {
                cin >> input[i][j];
            }
        }

        findLargest(input, row, col);
        cout << endl;
    }
}