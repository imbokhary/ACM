/*	
 *	UVA 621
 *	Secret Research
 *	Author: Imam Mohammad Bokhary
 */

#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	int n;
	string result;
	char str[200];

	cin>>n;

	for(int i=0; i<n; i++)
	{
		cin>>str;
		result = str;
		int l = result.length();

		if(!strcmp(str, "1") || !strcmp(str, "4") || !strcmp(str, "78"))
			cout<<"+"<<endl;
		else if(l>=2)
		{
			if(!result.compare(l-2, 2, "35"))
				cout<<"-"<<endl;
			else if(result.find("9")==0)
				cout<<"*"<<endl;
			else
				cout<<"?"<<endl;
		}
		else if(result.find("9")==0)
            		cout<<"*"<<endl;
		else
			cout<<"?"<<endl;

	}
 return 0;
}




