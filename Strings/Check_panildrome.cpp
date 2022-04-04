#include <bits/stdc++.h>
using namespace std;
bool checkPalindrome(char str[])
{
    // Write your code here

    bool ans = true;
    int n = 0, i = 0, j;
    for (int k = 0; str[k] != '\0'; k++)
    {
        n++;
    }
    j = n - 1;
    while (i < j)
    {
        if (str[i] == str[j])
        {
            ans = true;
        }
        else
        {
            ans = false;
            break;
        }
        i++;
        j--;
    }
    return ans;
}
int main()
{
    int size = 1e6;
    char str[size];
    cin >> str;
    cout << (checkPalindrome(str) ? "true" : "false");
}