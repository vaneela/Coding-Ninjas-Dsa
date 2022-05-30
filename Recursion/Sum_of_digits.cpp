#include <bits/stdc++.h>
#define ll long long
using namespace std;
int sumOfDigits(int n)
{
    // Write your code here
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return n % 10 + sumOfDigits(n / 10);
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << sumOfDigits(n) << endl;
    }
    return 0;
}