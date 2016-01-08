/*	
 *	UVA 12250
 *	Language Detection
 *	Author: Imam Mohammad Bokhary
 */

#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	char trans[][15]={"HELLO", "HOLA", "HALLO", "BONJOUR", "CIAO", "ZDRAVSTVUJTE"};
	char lang[][15]={"ENGLISH", "SPANISH", "GERMAN", "FRENCH", "ITALIAN", "RUSSIAN"};
	char str[2000][15];
	int i=0, j;

	while(gets(str[i]))
	{
		int flag = 0;
		if(strcmp(str[i], "#")==0)
			break;
		
		for(j=0; j<6; j++)
		{
			if(strcmp(str[i], trans[j])==0)
			{
				flag = 1;			
				break;
			}
		}

		if(flag)
			cout<<"Case "<<i<<": "<<lang[j]<<endl;
		else
			cout<<"Case "<<i<<": UNKNOWN"<<endl;

		i++;
	}
 return 0;
}




