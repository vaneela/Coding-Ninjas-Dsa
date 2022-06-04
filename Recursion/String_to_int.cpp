#include<bits/stdc++.h>
#define ll long long
using namespace std;
int strn(char *str, int n){
    if(n==1)
        return str[0]-48;
    else
        {int curr= (str[0]-48)*(pow(10,n-1));
    	return curr+strn(str+1,n-1);
        } 
}
int stringToNumber(char input[]) {
    // Write your code here
    int i=0;
    while(input[i]!='\0'){
        i++;
    }
   	return strn(input,i);

}

int main(){
    int t;
    cin >> t;
    while(t--){
        char input[50];
        cin >> input;
        cout << stringToNumber(input) << endl;
    }
    return 0;
}