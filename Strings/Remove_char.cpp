#include <bits/stdc++.h>
using namespace std;
void removeAllOccurrencesOfChar(char input[], char c)
{
    // Write your code here
    int i = 0, j = 0;
    while (input[i] != '\0')
    {
        if (input[i] != c)
        {
            input[j] = input[i];
            j++;
        }
        i++;
    }
    input[j] = '\0';
}

int main()
{
    int size = 1e6;
    char str[size];
    cin.getline(str, size);
    char c;
    cin >> c;
    removeAllOccurrencesOfChar(str, c);
    cout << str;
}