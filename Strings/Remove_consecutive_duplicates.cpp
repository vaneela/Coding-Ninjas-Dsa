#include <bits/stdc++.h>
using namespace std;
void removeConsecutiveDuplicates(char input[])
{
    //      .......These two codes are correct.......
    // int n=strlen(input),j=0;
    // for(int i=0;i<n-1;i++){
    //     if(input[i]!=input[i+1]){
    //         input[j++]=input[i];
    //     }
    // }

    int i = 0, j = 0;
    while (input[i++] != '\0')
    {
        if (input[i] != input[i + 1])
            input[j++] = input[i];
    }

    input[j] = '\0';
}
int main()
{

    int size = 1e6;
    char str[size];
    cin >> str;
    removeConsecutiveDuplicates(str);
    cout << str;
}