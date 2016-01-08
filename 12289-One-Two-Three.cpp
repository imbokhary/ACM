/*	
 *	UVA 12289
 *	One-Two-Three
 *	Author: Imam Mohammad Bokhary
 */

#include <iostream>

using namespace std;

int main()
{
	int n, count1, count2;
	char str[5];
	char sample1[]="one";
	char sample2[]="two";

	cin>>n;

	for(int i=0; i<n; i++)
	{
		cin>>str;
		count1 =  0;
		count2 = 0;
		int l = strlen(str);
		if(l==5)
			cout<<"3"<<endl;
		else 
		{
			if(l==3)
			{
				for(int j=0; j<3; j++)
				{
					if(str[j]==sample1[j])
					{
						count1++;
					}
					else if(str[j]==sample2[j])
					{
						count2++;
					}
				}

				if(count1==2||count1==3)
					cout<<"1"<<endl;
				else if(count2==2||count2==3)
					cout<<"2"<<endl;
			}
			else
				cout<<"2"<<endl;
		}
	}
 return 0;
}

