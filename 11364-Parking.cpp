/*	
 *	UVA 11364
 *	Parking
 *	Author: Imam Mohammad Bokhary
 */

#include <iostream>

using namespace std;

void bubble(int arr[], int n)
{
	int temp;

	for(int x=0; x<n-1; x++)
	{
		for(int y=0; y<n-x-1; y++)
		{
			if(arr[y]>arr[y+1])
			{
				temp=arr[y];
				arr[y]=arr[y+1];
				arr[y+1]=temp;
			}
		}
	}
}

int main()
{
	int arr[100];
	int t, n, sum, result;

	cin>>t;

	for(int i=0; i<t; i++)
	{
		cin>>n;
		sum=0;

		for(int j=0; j<n; j++)
		{
			cin>>arr[j];
		}

		bubble(arr, n);

		for(int j=0; j<n-1; j++)
		{
			sum+=arr[j+1]-arr[j];
		}

		result = sum*2;

		cout<<result<<endl;
	}
 return 0;
}

