#include<iostream>
using namespace std;
int arrayRotateCheck(int *arr, int n)
{
    //Write your code here
    int ans=0;
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            ans+=i+1;
        	break;	
        }
        
    }
    return ans;
}
int main()
{

	int t;
	cin >> t;
	while (t--)
	{

		int size;
		cin >> size;
		int *input = new int[size];

		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}

		cout << arrayRotateCheck(input, size) << endl;
		delete[] input;
	}
	
	return 0;
}