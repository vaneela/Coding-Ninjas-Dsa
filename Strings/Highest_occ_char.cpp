#include <bits/stdc++.h>
using namespace std;
char highestOccurringChar(char input[])
{
    char ans = 99;
    vector<int> freq(256, 0);
    int i = 0, max;
    while (input[i] != '\0')
    {
        freq[input[i]]++;
        i++;
    }
    max = 0;
    for (int i = 97; i < 123; i++)
    {
        if (max < freq[i])
        {
            max = freq[i];
            ans = i;
        }
    }
    return ans;
}
int main()
{
    int size = 1e6;
    char str[size];
    cin >> str;
    cout << highestOccurringChar(str);
}