/*	
 *	UVA 12403
 *	Save Setu
 *	Author: Imam Mohammad Bokhary
 */


#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	char str[20];
	int t, result= 0;
	
	cin>>t;
	getchar();

	for(int i=0; i<t; i++)
	{
		gets(str);

		if(strcmp(str, "report"))
		{
			char* pch;
			pch = strtok(str, " ");
			while(pch != NULL)
			{
				if(strcmp(pch, "donate"))
					result += atoi(pch);

				pch = strtok (NULL, " ");
			}
		}
		
		if(!strcmp(str, "report"))
			cout<<result<<endl;
	}
	return 0;
}


