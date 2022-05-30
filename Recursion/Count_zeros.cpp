#include <bits/stdc++.h>
#define ll long long
using namespace std;

int countZeros(int n)
{
    // Write your code here
    if (n < 10)
    {
        if (n == 0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    int ans = n % 10;
    if (!ans)
    {
        return 1 + countZeros(n / 10);
    }
    else
        return countZeros(n / 10);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << countZeros(n) << endl;
    }
    return 0;
}