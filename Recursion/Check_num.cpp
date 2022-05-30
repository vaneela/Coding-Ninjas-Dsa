#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool checkNumber(int arr[], int n, int x) {
 
	if (arr[n-1] == x) 
        return true; 
    if (n == 1) 
    { 
        if (arr[n - 1] == x) 
            return true; 
        else 
            return false; 
    } 
    return checkNumber(arr, n - 1, x);

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
    
    if(checkNumber(input, n, x)) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }
    return 0;
}