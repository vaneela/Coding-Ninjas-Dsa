#include<bits/stdc++.h>
#define ll long long
using namespace std;
void remd(char * s, int n){
    if(n<2){
        return;
    }
    else{
        if(s[0] == s[1]){
            for(int i=1;i<=n;i++){
                s[i-1]=s[i];
            }
            return remd(s,n-1);
        }else{
            return remd(s+1,n-1);
        }
    }
}
void removeConsecutiveDuplicates(char *input) {
	
	int i=0;
    while(input[i]!='\0'){
        i++;
    }
    return remd(input, i+1);
	
}
int main(){
    int t;
    cin >> t;
    while(t--){
    char s[100000];
    cin >> s;
    removeConsecutiveDuplicates(s);
    cout << s << endl;
    
    }
    return 0;
}