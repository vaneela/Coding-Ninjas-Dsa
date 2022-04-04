#include <iostream>
#include <cstring>
using namespace std;

void trimSpaces(char input[])
{
    // Write your code here
    int i = 0, j = 0;
    while (input[i] != '\0')
    {
        if (input[i] != ' ')
            input[j] = input[i];
        else
            j--;
        i++;
        j++;
    }

    input[j] = '\0';
}

int main()
{
    char input[1000000];
    cin.getline(input, 1000000);
    trimSpaces(input);
    cout << input << endl;
}
