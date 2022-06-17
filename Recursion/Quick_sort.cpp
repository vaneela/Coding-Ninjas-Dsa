#include <bits/stdc++.h>
#define ll long long
using namespace std;
#include <bits/stdc++.h>

int partition(int *arr, int s, int e)
{
    int pivot = arr[s];
    int c = 0;
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] < pivot)
            c++;
    }
    // cout << c << endl;
    swap(arr[s], arr[s + c]);
    int i = s, j = e;
    c+=s;
    while (i < c && j > c)
    {
        if (arr[i] < pivot)
            i++;
        else if (arr[j] >= pivot)
            j--;
        else
            swap(arr[i++], arr[j--]);
    }
    return c;
}
void qs(int *arr, int s, int e)
{
    if (s > e)
        return;
    int c = partition(arr, s, e);
    qs(arr, s, c - 1);
    qs(arr, c + 1, e);
}
void quickSort(int input[], int size)
{

    return qs(input, 0, size - 1);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int *input = new int[n];

        for (int i = 0; i < n; i++)
        {
            cin >> input[i];
        }

        quickSort(input, n);
        for (int i = 0; i < n; i++)
        {
            cout << input[i] << " ";
        }
        cout << endl;

        delete[] input;
    }
    return 0;
}