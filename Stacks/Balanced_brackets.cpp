#include <stack>
bool isBalanced(string str)
{
    // Write your code here.
    stack<char>st;
    bool ans=0;
    for(int i=0;i<str.size();i++){
        if(str[i]=='('){
            st.push(str[i]);
            ans=1;
        }else{
            if(st.empty())
                return 0;
            else
                st.pop();
            }
    }
    if(!st.empty())
        return 0;
    return ans;
}