#include <iostream>
using namespace std;
int main() 
{
	int t,x,y,a[100];
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int F=-1;
		cin>>x>>y;
		if(x>=y&&x-y<=2&&(x+y)%2==0)
		{
		  if(x%2==0)	
		  F=x+y;
		  else 
		  F=x+y-1;
		}
		a[i]=F;
	}
	for(int i=0;i<t;i++)
	cout<<a[i]<<endl;
	return 0;
}
