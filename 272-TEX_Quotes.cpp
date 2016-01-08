/*	
 *	UVA 272
 *	TEX Quotes
 *	Author: Imam Mohammad Bokhary
 */

#include <stdio.h>
#include <string.h>

using namespace std;

int main()
{
    char s[1000000]="";
	int i = 1;
    
	while(gets(s))
	{
		int l = strlen(s);

		for(int j=0; j<l; j++)
		{
			if(s[j]=='"')
			{
				if(i%2==1)
					printf("``");
				else
					printf("''");

				i++;
			}
			else
				printf("%c",s[j]);
		}

		printf("\n");
    }
    return 0;
}

