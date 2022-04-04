#include <iostream>
using namespace std;
void printSubstrings(char input[])
{
    // Write your code here
    int n = 0, i = 0;
    while (input[i] != '\0')
    {
        n++;
        i++;
    }
    int s = 0, e = 0;
    while (s < n)
    {
        for (int i = s; i <= e; i++)
        {
            cout << input[i];
        }
        cout << endl;
        if (e < n - 1)
        {
            e++;
        }
        else
        {

            e = ++s;
        }
    }
}
int main()
{
    int size = 1e6;
    char str[size];
    cin >> str;
    printSubstrings(str);
}