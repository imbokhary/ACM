/*	
 *	UVA 272
 *	TEX Quotes
 *	Author: Imam Mohammad Bokhary
 */

#include <iostream>

using namespace std;

int main()
{
	int k;
	int m, n, x, y;

	while(cin>>k && k)
	{
		cin>>x>>y;
		for(int i=0; i<k; i++)
		{
			cin>>m>>n;
			if(x==m || y==n)
				cout<<"divisa"<<endl;
			if(m>x && n>y)
				cout<<"NE"<<endl;
			if(m<x && n>y)
				cout<<"NO"<<endl;
			if(m>x && n<y)
				cout<<"SE"<<endl;
			if(m<x && n<y)
				cout<<"SO"<<endl;
		}
	}
 return 0;
}
