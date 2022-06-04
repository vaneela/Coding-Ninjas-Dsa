#include<bits/stdc++.h>
#define ll long long
using namespace std;
// Change in the given string itself. So no need to return or print anything
void remx(char * str, int n){
    if(n==0){
        return;
    }
    else if(str[0]=='x'){
        for(int i=1;i<n;i++){
            str[i-1]=str[i];
        }
        remx(str,n-1);
    }else{
        remx(str+1,n-1);
    }
}
void removeX(char input[]) {
    // Write your code here
    int i=0;
    while(input[i]!='\0'){
        i++;
    }
    remx(input,i+1);
    

}

int main(){
    int t;
    cin >> t;
    while(t--){
        char input[100];
        cin.getline(input, 100);
        removeX(input);
        cout << input << endl;
    }
    return 0;
}