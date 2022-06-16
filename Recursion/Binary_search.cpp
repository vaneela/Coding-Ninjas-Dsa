#include <iostream>
using namespace std;

int bi(int arr[], int s, int e, int x)
{
    int mid = s + (e - s) / 2;
    if (s > e)
        return -1;
    else if (arr[mid] == x)
    {
        return mid;
    }
    else if (arr[mid] > x)
        return bi(arr, s, mid - 1, x);
    else
        return bi(arr, mid + 1, e, x);
}
int binarySearch(int arr[], int n, int x)
{
    // Write your code here
    return bi(arr, 0, n - 1, x);
}

int main()
{
    int input[100000], length, element, ans;
    cin >> length;
    for (int i = 0; i < length; i++)
    {
        cin >> input[i];
        ;
    }

    cin >> element;
    ans = binarySearch(input, length, element);
    cout << ans << endl;
}