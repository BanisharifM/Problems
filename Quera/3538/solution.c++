#include <iostream>
using namespace std;
int main() 
{
	int x=7,n;
	string s[7]={"shanbe","1shanbe","2shanbe","3shanbe","4shanbe","5shanbe","jome"};
	string s2;
	for(int i=0;i<3;i++)
	{
		cin>>n;
		for(int j=0;j<n;j++)
		{
			cin>>s2;
			for(int k=0;k<7;k++)
			{
				if(s[k]==s2)
				{
					x--;
					s[k]="0";
				}
			}
		}
	}
	cout<<x;
	return 0;
}
