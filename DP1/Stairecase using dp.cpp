#include<bits/stdc++.h>
using namespace std;
unsigned int m = 1000000007;
int solve(int n, int * arr){
    if(arr[n]!=-1)
        return arr[n];
    int x = solve(n-1,arr);
    int y = solve(n-2,arr);
    int z = solve(n-3,arr);
    arr[n] = (x%m + y%m +z%m)%m;
    return arr[n];
    
}
int main(){
    
    // write your code here
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int *arr = new int[n+1];
        arr[0]=0;
        arr[1]=1;
        arr[2]=2;
        arr[3]=4;
        for(int i=4;i<=n;i++){
            arr[i] = -1;
        }
        cout << solve(n,arr) << endl;
        
    }
    return 0;
}