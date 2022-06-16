#include<bits/stdc++.h>
#define ll long long
using namespace std;
int staircase(int n){
   
    if(n==0 || n==1)
        return 1;
    if(n==2)
        return 2;
    if(n==3)
        return 4;
    int x = staircase(n-1);
    int y = staircase(n-2);
    int z = staircase(n-3);
    return x+y+z;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, output;
        cin >> n;
        output=staircase(n);
        cout<< output <<endl;

    }
    return 0;
}