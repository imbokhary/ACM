/*	
 *	UVA 12577
 *	Hajj-e-Akbar
 *	Author: Imam Mohammad Bokhary
 */


#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	char str[8];
	int i=1;
	while(1)
	{
		gets(str);

		if(!strcmp(str, "Hajj"))
			cout<<"Case "<<i<<": Hajj-e-Akbar"<<endl;
		else if(!strcmp(str, "Umrah"))
			cout<<"Case "<<i<<": Hajj-e-Asghar"<<endl;
		else if(!strcmp(str, "*"))
			break;
		else
			cout<<"Case "<<i<<": Hajj-e-Asghar"<<endl;

		i++;
	}
 return 0;
}



