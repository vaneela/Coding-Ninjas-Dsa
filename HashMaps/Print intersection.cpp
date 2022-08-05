#include<bits/stdc++.h>

void printIntersection(int arr1[], int arr2[], int n, int m) {
    // Write your code here
    map<int,int>m1;
        unordered_map<int,int>m2;
    for(int i=0;i<n;i++)
        m1[arr1[i]]++;
    for(int i=0;i<m;i++)
        m2[arr2[i]]++;
    for(auto x : m1){
        auto it = m2.find(x.first);
        if(it!= m2.end()){
            int t = min(x.second,it->second);
            while(t--)
                cout << x.first<<endl;
        }
    }
    
}