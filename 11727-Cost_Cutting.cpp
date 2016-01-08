/*	
 *   UVA 11727
 *	 Cost Cutting
 *	 Author: Imam Mohammad Bokhary
 */

#include <iostream>

using namespace std;

int main()
{
	int T, a, b, c;

	cin>>T;

	for(int i=0; i<T; i++)
	{
		cin>>a>>b>>c;

		if((a>b && a<c) || (a>c && a<b))
			cout<<"Case "<<i+1<<": "<<a<<endl;
		else if((b>a && b<c) || (b>c && b<a))
			cout<<"Case "<<i+1<<": "<<b<<endl;
		else if((c>a && c<b) || (c>b && c<a))
			cout<<"Case "<<i+1<<": "<<c<<endl;

	}
 return 0;
}
