#include <iostream>
using namespace std;

int main() 
{
	int x,y,t;
	cin>>t;
	int a[t],b[t],c[t];
	for(int i=0;i<t;i++)
	{
		cin>>a[i]>>b[i];
		if(a[i]%2==0) 
		{
			if(b[i]%2==0 && a[i]>=b[i]) c[i]=a[i]+b[i];
			if(b[i]%2==1) c[i]=-1;
		}
		else
		{
			if(b[i]%2==1 && a[i]>=b[i]) c[i]=a[i]+b[i]-1;
			if(b[i]%2==0) c[i]=-1;
		}
	}
	for(int i=0;i<t;i++)
	{
		cout<<c[i];
		if(i!=t-1) cout<<endl;
	}
	
	return 0;
}
