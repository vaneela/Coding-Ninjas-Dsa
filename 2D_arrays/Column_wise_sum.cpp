#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, m;
    cin >> m >> n;
    int arr[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        long long sum = 0;
        for (int j = 0; j < m; j++)
        {
            sum += arr[j][i];
        }
        cout << sum << " ";
    }

    cout << endl;
}
