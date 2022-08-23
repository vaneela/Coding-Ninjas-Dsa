#include<bits/stdc++.h>
#define ll long long
using namespace std;
int path[10][10];
void help(int n, int arr[][n],int r,int c){
    if(r==n&& c==n){
        for(int i =0; i<n;i++){
            for(int i=0 ;i<n;i++){
                cout << path[i][j] <<" ";
            }
        }cout << endl;
    }
    for(int i=0;i<n;i++){
        if()
    }
}
void ratemaze(int n, int arr[][n]){
    memset(path,0,10*10*(sizeof(int)));
    help(n,arr,0);
}
int main(){
    int n;
    cin >> n;
    int arr[n][n];
    for(int i=0; i< n;i++){
        for(int j =0; j<n;j++){
            cin >> arr[i][j];
        }
    }
    return 0;
}