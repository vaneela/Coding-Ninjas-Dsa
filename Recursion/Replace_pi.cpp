#include <bits/stdc++.h>
#define ll long long
using namespace std;
// Change in the given string itself. So no need to return or print anything
void reppi(char *str, int n)
{
    if (n < 2)
    {
        return;
    }
    else if (str[0] == 'p' && str[1] == 'i')
    {
        for (int i = n; i > 1; i--)
        {
            str[i + 2] = str[i];
        }
        str[0] = '3';
        str[1] = '.';
        str[2] = '1';
        str[3] = '4';
        reppi(str + 4, n - 2);
    }
    else
    {
        reppi(str + 1, n - 1);
    }
}
void replacePi(char input[])
{
    // Write your code
    int i = 0;
    while (input[i] != '\0')
    {
        i++;
    }
    reppi(input, i + 1);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char input[10000];
        cin.getline(input, 10000);
        replacePi(input);
        cout << input << endl;
    }
    return 0;
}