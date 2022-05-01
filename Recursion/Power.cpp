#include<iostream>

using namespace std;
int power(int x, int n) {
 
    if(n==0){
        return 1;
    }
    int smop = power(x,n-1);
    int op = x* smop;
    return op;

}


int main(){
    int x, n;
    cin >> x >> n;
  
    cout << power(x, n) << endl;
}

