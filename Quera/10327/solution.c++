#include <iostream>
#include<string>
using namespace std;
int main() 
{
	int n,F,a[100],x=0;
	string s,t;
	cin>>n;
	cin>>t;
	for(int i=0;i<n;i++)
	{
		cin>>s;
		F=1;
		int l=t.length();
			for(int j=0;j<s.length();j++)
			{
		      for(int k=0;k<t.length();k++)
		      {
		      	if(s[j]==t[k])
		          break;
		        if(k==l-1&&s[j]!=t[k])
				F=0;  
		      }
			}
			a[i]=F;
	}
	for(int i=0;i<n;i++)
	{
		if(a[i]==0)
		cout<<"No\n";
		else
		cout<<"Yes\n";
	}
	return 0;
}
