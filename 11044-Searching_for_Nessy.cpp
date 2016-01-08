/*	
 *	UVA 11044
 *	Searching for Nessy
 *	Author: Imam Mohammad Bokhary
 */

#include<iostream>

using namespace std;

int main()
{
	int t;
	int m, n, l, w, num;

	cin>>t;

	for(int i=0; i<t; i++)
	{
		cin>>m>>n;

		l=(m/3);
		w=(n/3);

		num = l * w;
		
		cout<<num<<endl;
	}
 return 0;
}
