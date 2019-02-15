#include <iostream>
#include<string.h>
#include<string>
using namespace std;
int main() 
{
	int n;
	char s[1000];
	cin>>n;
	gets(s);
	gets(s);
	int l=strlen(s);
	int k=l;
	for(int i=l-1;i>=0;i--)
	{
		if(s[i]==' '||i==0)
		{
			if(i==0) i--;
			for(int j=i+1;j<k;j++)
			{
				cout<<s[j];
			}
			cout<<" ";
			k=i;
		}
	}
	return 0;
}
