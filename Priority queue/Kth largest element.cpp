#include<queue>
int kthLargest(int* arr, int n, int k) {
    // Write your code here
    priority_queue<int>pq;
    for(int i=0; i<n;i++)
        pq.push(arr[i]);
    int ans = pq.top();
    while(k--){
        ans = pq.top();
        pq.pop();
    }
    return ans;
}