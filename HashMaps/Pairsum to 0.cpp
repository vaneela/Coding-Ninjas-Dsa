#include<bits/stdc++.h>

int pairSum(int *arr, int n) {
	// Write your code here
    int ans =0;
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        int x = 0-arr[i];
        if(mp.find(x)!=mp.end())
            ans+=mp[x];
        mp[arr[i]]++;
    }
    return ans;
}