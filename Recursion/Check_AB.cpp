#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool ab(char *s, int n)
{
    if (n == 1 || n == 0)
        return true;
    else if (s[0] == 'a')
    {
        if (s[1] == '\0')
            return 1;
        else if (s[1] == 'a')
        {
            return ab(s + 1, n - 1);
        }
        else
        {
            if (s[1] == 'b' && s[2] == 'b')
            {
                return ab(s + 1, n - 1);
            }
            else
                return 0;
        }
    }
    else if (s[0] == 'b' && s[1] == 'b')
    {
        if (s[2] == '\0')
            return 1;
        else if (s[2] == 'a')
            return ab(s + 2, n - 2);
        else
            return 0;
    }
    else
        return 0;
}
bool checkAB(char str[])
{
    // Write your code here
    int n = 0;
    while (str[n] != '\0')
        n++;
    if (str[0] == 'b')
    {
        return 0;
    }

    return ab(str, n + 1);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char input[100];
        bool ans;
        cin >> input;
        ans=checkAB(input);
        if(ans)
            cout<< "true" << endl;
        else
            cout<< "false" << endl;
    }
    return 0;
}
