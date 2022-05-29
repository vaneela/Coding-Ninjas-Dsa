#include<bits/stdc++.h>
#define ll long long
using namespace std;
void print(int n){

        if(n==0){
       return;
    }
    print(n-1);
    cout << n << " ";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        print(n);
    }
    return 0;
}