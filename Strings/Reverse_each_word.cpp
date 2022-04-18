#include<bits/stdc++.h>
using namespace std;
void reverse(char *str,int s, int e){
    
    while(s<e){
        swap(str[s++],str[e--]);
    }
}
void reverseEachWord(char input[]) {
    // Write your code here
    // int i=0,j=0;
    // while(input[i]!='\0'){
    //     if(input[i]==' '){
    //         reverse(input,j,i-1);
    //         j=i+1;
    //     }
    //     i++;
    // }
    // reverse(input, j,strlen(input)-1);
    int j=0;
    for(int i=0;i<=strlen(input);i++){
        if(input[i]==' ' || input[i]=='\0'){
            reverse(input,j,i-1);
            j= i+1;
        }
    }
}

int main() {
    int size = 1e6;
    char str[size];
    cin.getline(str, size);
    reverseEachWord(str);
    cout << str;
}