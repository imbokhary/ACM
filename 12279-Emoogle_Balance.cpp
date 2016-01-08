/*	
 *	UVA 12279
 *	Emoogle Balance
 *	Author: Imam Mohammad Bokhary
 */


#include <iostream>

using namespace std;

int main()
{
	int N;
	int a, x=1, count;

	while(cin>>N && N)
	{
		count = 0;
		for(int i=0; i<N; i++)
		{
			cin>>a;
			if(a>0)
				count++;
			else
				count--;
		}
		cout<<"Case "<<x<<": "<<count<<endl;
		x++;
	}

 return 0;
}


