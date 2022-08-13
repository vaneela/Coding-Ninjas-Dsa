bool solve(int arr[], int s, int n)
{
    if (s >= n)
        return 1;
    int lc = 2 * s + 1;
    int rc = 2 * s + 2;
    if (lc < n && rc < n)
    {
        if (arr[lc] >= arr[s] && arr[rc] >= arr[s])
            return 0;
    }
    else if (lc < n)
    {
        if (arr[lc] >= arr[s])
            return 0;
    }
    else if (rc < n)
    {
        if (arr[rc] >= arr[s])
            return 0;
    }
    return solve(arr, s + 1, n);
}
bool isMaxHeap(int arr[], int n)
{
    // Write your code here
    return solve(arr, 0, n);
}