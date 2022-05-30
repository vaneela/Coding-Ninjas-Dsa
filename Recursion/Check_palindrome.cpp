#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool cp(char str[], int n)
{
    if (n == 0 || n == 1)
    {
        return true;
    }
    else if (str[0] == str[n - 1])
    {

        return cp(str + 1, n - 2);
    }
    else
    {
        return false;
    }
}
bool checkPalindrome(char str[])
{
    // Write your code here3
    int i = 0, n = 0;
    while (str[i] != '\0')
    {
        n++;
        i++;
    }
    return cp(str, n);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char input[50];
        cin >> input;

        if (checkPalindrome(input))
        {
            cout << "true" << endl;
        }
        else
        {
            cout << "false" << endl;
        }
    }
    return 0;
}