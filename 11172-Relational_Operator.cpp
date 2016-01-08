/*	
 *	UVA 11172
 *	Relational Operator
 *	Author: Imam Mohammad Bokhary
 */

#include<iostream>

using namespace std;

int main()
{
	long int a, b;
	int t;

	cin>> t;

	for(int i=0; i<t; i++)
	{
		cin>>a>>b;

		if(a>b)
			cout<<">";
		else if(a<b)
			cout<<"<";
		else
			cout<<"=";

		cout<<"\n";
	}
 return 0;
}
