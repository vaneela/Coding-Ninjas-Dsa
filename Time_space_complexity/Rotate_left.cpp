#include<bits/stdc++.h>
using namespace std;
void rotate(int *arr, int d, int n)
{
    //Write your code here
    reverse(arr,arr+n);
    reverse(arr,arr+n-d);
    reverse(arr+(n-d),arr+n);
    
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

		for (int i = 0; i < size; ++i)
		{
			cin >> input[i];
		}

		int d;
		cin >> d;

		rotate(input, d, size);

		for (int i = 0; i < size; ++i)
		{
			cout << input[i] << " ";
		}
		
		delete[] input;
		cout << endl;
	}

	return 0;
}