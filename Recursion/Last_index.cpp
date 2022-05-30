#include<bits/stdc++.h>
#define ll long long
using namespace std;
int lastIndex(int arr[], int n, int x) {
	if(n==0){
        return -1;
    }
    else if(arr[n-1]==x){
        return n-1;
    }
    lastIndex(arr,n-1,x);
}

int main(){
       int n;
    cin >> n;
  
    int *input = new int[n];
    
    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }
    
    int x;
    
    cin >> x;
    
    cout << lastIndex(input, n, x) << endl;
    return 0;
}