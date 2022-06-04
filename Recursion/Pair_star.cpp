#include<bits/stdc++.h>
#define ll long long
using namespace std;
// Change in the given string itself. So no need to return or print the changed string.
void pairs(char *s, int n){
    if(n<2){
        return;
    }else{
        if(s[0]==s[1]){
            for(int i=n;i>0;i--){
                s[i+1]=s[i];
            }
            s[1]='*';
            return pairs(s+2,n-1);
        }
        else{
            return pairs(s+1,n-1);
        }
    }
}
void pairStar(char input[]) {
    // Write your code here
    int i=0;
    while(input[i]!='\0'){
        i++;
    }
	return pairs(input,i+1);
}

int main(){
    int t;
    cin >> t;
    while(t--){
        char input[100];
        cin.getline(input, 100);
        pairStar(input);
        cout << input << endl;
    }
    return 0;
}