#include<bits/stdc++.h>
#define ll long long
using namespace std;
int count(int n){

    if(n<10){
        return 1;
    }
    return count(n/10)+1;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cout << "Sum of digits is " << count(n) << endl;
    }
    return 0;
}