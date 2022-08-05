#include<bits/stdc++.h>
int highestFrequency(int arr[], int n) {
    // Write your code here
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++)
        mp[arr[i]]++;
    int ans,freq =-1 ;
    for(int i=0 ;i<n;i++){
        if(mp[arr[i]] > freq){
            freq= mp[arr[i]];
            ans = arr[i];
        }
    }
    return ans;
}