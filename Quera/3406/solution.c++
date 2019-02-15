#include <iostream>
using namespace std;
int main() 
{
	int x,y,x1=0,y1=0;
	cin>>x>>y;
	int a=x,b=y;
	do
	{
	 x1=x1*10+a%10;
	 a/=10;	
	}while(a!=0);
	do
	{
	 y1=y1*10+b%10;
	 b/=10;	
	}while(b!=0);
//	cout<<x1<<"\t"<<y1<<"\n";
	if(x1>y1)
	cout<<y<<" < "<<x;
	else if(x1<y1)
	cout<<x<<" < "<<y;
	else
	cout<<x<<" = "<<y;
	return 0;
}
