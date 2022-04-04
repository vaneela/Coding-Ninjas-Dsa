#include <iostream>
#include <cstring>
using namespace std;

void replaceCharacter(char input[], char c1, char c2)
{
    // Write your code here
    int n = 0;
    for (int i = 0; input[i] != '\0'; i++)
    {
        n++;
    }
    for (int i = 0; i < n; i++)
    {
        if (input[i] == c1)
        {
            input[i] = c2;
        }
    }
}

int main()
{
    char input[1000000];
    char c1, c2;
    cin >> input;
    cin >> c1 >> c2;
    replaceCharacter(input, c1, c2);
    cout << input << endl;
}