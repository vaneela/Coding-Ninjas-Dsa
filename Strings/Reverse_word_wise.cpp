#include <iostream>
using namespace std;
void reverseStringWordWise(char input[])
{
    // Write your code here
    long long n = 0, i = 0;
    while (input[i] != '\0')
    {
        n++;
        i++;
    }
    long long j = n - 1;
    i = 0;
    while (i < j)
    {
        char temp = input[i];
        input[i] = input[j];
        input[j] = temp;
        i++;
        j--;
    }
    long long s = 0, e = 0;
    for (long long i = 0; i <= n; i++)
    {
        if (input[i] != ' ' || input[i] == '\0')
        {
            e++;
        }
        else
        {
            long long start = s, end = e - 1;
            while (start < end)
            {
                char temp = input[start];
                input[start] = input[end];
                input[end] = temp;
                start++;
                end--;
            }
            s = i + 1;
            e = i + 1;
        }
    }
    long long start = s, end = n - 1;
    while (start < end)
    {
        char temp = input[start];
        input[start] = input[end];
        input[end] = temp;
        start++;
        end--;
    }
}
int main()
{
    char input[1000];
    cin.getline(input, 1000);
    reverseStringWordWise(input);
    cout << input << endl;
}