#include <iostream>
using namespace std;
int main() 
{
	long long int x1,y1,x2,y2,x3,y3,x,y;
	cin>>x1>>y1>>x2>>y2>>x3>>y3;
	if(x1==x2)
	{
		if(y1==y3)
		{
			x=x3;
			y=y2;
		}
		if(y2==y3)
		{
			x=x3;
			y=y1;
		}
	}
	if(x1==x3)
	{
		if(y1==y2)
		{
			x=x2;
			y=y3;
		}
		if(y2==y3)
		{
			x=x2;
			y=y1;
		}
	}
		if(x2==x3)
	{
		if(y2==y1)
		{
			x=x1;
			y=y3;
		}
		if(y3==y1)
		{
			x=x1;
			y=y2;
		}
	}
	cout<<x<<" "<<y<<endl;

	
	return 0;
}
