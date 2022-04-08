#include <bits/stdc++.h>
using namespace std;
void Leaders(int *arr, int n)
{
    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (arr[i] >= arr[j])
            {
                flag = true;
            }
            else
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            cout << arr[i] << " ";
        }
    }
}
int main()
{
    int len;
    cin >> len;
    int *arr = new int[len + 1];

    for (int i = 0; i < len; i++)
    {
        cin >> arr[i];
    }
    Leaders(arr, len);
}