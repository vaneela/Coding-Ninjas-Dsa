#include<bits/stdc++.h>
#define ll long long
using namespace std;
void repc(char * str, char c , char x , int n){
    if(n==0){
        return;
    }
    else{
        if(str[0]==c){
            str[0] = x;
            
        }
       return repc(str+1,c,x,n-1);
    }
}
void replaceCharacter(char input[], char c1, char c2) {
    
    int i=0;
    while(input[i]!='\0'){
        i++;
    }
    return repc(input,c1,c2,i);
    
}
int main(){
    int t;
    cin >> t;
    while(t--){
    char input[1000000];
    char c1, c2;
    cin >> input;
    cin >> c1 >> c2;
    replaceCharacter(input, c1, c2);
    cout << input << endl;
    }
    return 0;
}