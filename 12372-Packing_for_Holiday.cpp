/*	
 *	UVA 12372
 *	Packing for Holiday
 *	Author: Imam Mohammad Bokhary
 */

#include <iostream>

using namespace std;

int main()
{
	int T;
	int l, w, h;

	cin>>T;
	for(int i=0; i<T; i++)
	{
		cin>>l>>w>>h;

		if(l<=20 && w<=20 && h <=20)
			cout<<"Case "<<i+1<<": good"<<endl;
		else
			cout<<"Case "<<i+1<<": bad"<<endl;
	}
 return 0;
}

