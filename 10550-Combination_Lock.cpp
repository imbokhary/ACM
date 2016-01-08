/*	
 *	UVA 10550
 *	Combination Lock
 *	Author: Imam Mohammad Bokhary
 */

#include <iostream>

using namespace std;

int main()
{
	int a, b, c, d;
	int result;

	while(1)
	{
		cin>>a>>b>>c>>d;

		result = 360*3;

		if(b>a)
			result+= (40 -b +a)*9;
		else
			result+= (a-b)*9;

		if(b>c)
			result+= (40 -b +c)*9;
		else
			result+= (c-b)*9;

		if(d>c)
			result+= (40 -d +c)*9;
		else
			result+= (c-d)*9;

		if(a==0 && b==0 && c==0 && d==0)
			break;

		cout<<result<<endl;
	}
 return 0;
}
