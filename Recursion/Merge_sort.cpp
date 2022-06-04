#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define ii pair<int,int>
 
using namespace std;
void merge(int *arr, int s, int e){
	int mid = s+(e-s)/2;
    int len1= mid-s +1;
    int len2 = e-mid;
    int * a1 = new int[len1];
    int * a2 = new int[len2];
    int k = s;
    for(int i=0;i<len1;i++){
        a1[i]=arr[k++];
    }
    k = mid +1;
    for(int i=0;i<len2;i++){
        a2[i]=arr[k++];
    }
    int i=0,j=0,curr =s;
    while(i<len1 && j<len2){
        if(a1[i]<a2[j]){
            arr[curr++]=a1[i++];
        }else{
            arr[curr++]=a2[j++];
        }
    }
    while(i<len1)
        arr[curr++]=a1[i++];
    while(j<len2)
        arr[curr++]=a2[j++];
    delete []a1;
    delete []a2;
}
void mergesort(int *arr, int s, int e){
    if(s>=e){
        return;
    }
    int mid = s+(e-s)/2;
    mergesort(arr,s,mid);
    mergesort(arr,mid+1,e);
    merge(arr,s,e);
}

int main(){
    int t=1;
    // cin >> t;
    while(t--){
        int n;
        cin >> n;
        int * arr = new int[n];
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        // for(int i=0;i<n;i++){
        //     cout << arr[i] << ' ';
        // }
        cout << endl;
        mergesort(arr,0,n-1);
        for(int i=0;i<n;i++){
            cout << arr[i] << ' ';
        }
        cout << endl;
    }
    return 0;
}