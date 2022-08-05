#include<bits/stdc++.h>


string uniqueChar(string str) {
	// Write your code here
	string ans ="";
    unordered_map<char,int>mp;
    for(char c : str)
        mp[c]++;
    for(int i=0;i<str.size();i++){
        auto it=mp.find(str[i]);
        if(it->second >0)
            ans+=it->first;
        mp[str[i]]=-1;
    }
    return ans;
}   