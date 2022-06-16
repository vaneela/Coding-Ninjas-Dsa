#include<bits/stdc++.h>
#define ll long long
using namespace std;
void towerOfHanoi(int n, char a, char b, char c) {
    // Write your code here
    if(n==0)
        return;
    if(n==1){
        cout << a << " " << c << endl;
        return;
    }
    towerOfHanoi(n-1,a,c,b);
    cout << a <<" " << c << '\n';
	towerOfHanoi(n-1,b,a,c);
}
int main(){
    int t;
    cin >> t;
    while(t--){
    int n;
    cin >> n;
    towerOfHanoi(n, 'a', 'b', 'c');
    }
    return 0;
}