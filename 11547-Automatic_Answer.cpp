/*	
 *	UVA 272
 *	TEX Quotes
 *	Author: Imam Mohammad Bokhary
 */

#include <iostream>

using namespace std;

int main()
{
	int t;
	long long int n, result;

	cin>>t;

	for(int i=0; i<t; i++)
	{
		cin>>n;

		result = (((((n * 567/9) + 7492) * 235/47) - 498) % 100) /10;

		if(result<0)
			result = result*(-1);
		
		cout<< result <<endl;
	}
	return 0;
}
