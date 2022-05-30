#include<bits/stdc++.h>
#define ll long long
using namespace std;

int sum(int arr[], int n) {
  
	if(n==0){
        return 0;
    }
    return sum(arr,n-1)+arr[n-1];      
}
int main(){
  int n;
    cin >> n;
  
    int *input = new int[n];
    
    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }
    
    cout << sum(input, n) << endl;
    return 0;
}