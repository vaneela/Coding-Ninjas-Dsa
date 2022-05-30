#include <bits/stdc++.h>
#define ll long long
using namespace std;
double geometricSum(int k)
{
    // Write your code here
    if (k == 0)
    {
        return 1;
    }
    else
    {
        return geometricSum(k - 1) + 1 / pow(2, k);
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int k;
        cin >> k;
        cout << fixed << setprecision(5);
        cout << geometricSum(k) << endl;
    }
    return 0;
}