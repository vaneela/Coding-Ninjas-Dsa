#include<bits/stdc++.h>
#define ll long long
using namespace std;
int multiplyNumbers(int m, int n) {
    // Write your code here
    if(n==0 || m==0){
        return 0;
    }
	if(m==1){
        return n;
    }
    else{
        return n+multiplyNumbers(m-1,n);
    }

}



int main(){
    int t;
    cin >> t;
    while(t--){
    int m, n;
    cin >> m >> n;
    cout << multiplyNumbers(m, n) << endl;
    }
    return 0;
}