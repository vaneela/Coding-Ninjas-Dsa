#include <bits/stdc++.h>
using namespace std;
bool isPermutation(char input1[], char input2[])
{
    // Write your code here
    int i = 0;
    vector<char> c1, c2;
    while (input1[i] != '\0')
    {
        c1.push_back(input1[i++]);
    }
    i = 0;
    while (input2[i] != '\0')
    {
        c2.push_back(input2[i++]);
    }
    sort(c1.begin(), c1.end());
    sort(c2.begin(), c2.end());
    i = 0;
    for (auto c : c1)
    {
        input1[i++] = c;
    }
    i = 0;
    for (auto c : c2)
    {
        input2[i++] = c;
    }
    if (strcmp(input1, input2) == 0)
    {
        return true;
    }
    return false;
}

int main()
{
    int size = 1e6;
    char str1[size];
    char str2[size];
    cin >> str1 >> str2;
    cout << (isPermutation(str1, str2) ? "true" : "false");
}