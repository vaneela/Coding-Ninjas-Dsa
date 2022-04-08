#include<bits/stdc++.h>
using namespace std;
string getCompressedString(string &input) {
    // Write your code here.
        string output="";
    for(int i=0;input[i]!='\0';i++)
    {
        output+=input[i];
        int count=1;
        while(input[i+1]==input[i] && input[i+1]!='\0')
        {
            count++;
            i++;
        }
        if(count>1)
            output+=count+48;
    }
    return output;
}   
int main(){
    int size = 1e6;
    string str;
    getline(cin, str);
    str = getCompressedString(str);
    cout << str << endl;
}