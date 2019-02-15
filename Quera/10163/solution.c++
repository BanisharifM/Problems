#include <iostream>
using namespace std;
int main() 
{
	int a,b,c,x1,x2,x3,y1,y2,y3;
	cin>>a>>b>>c;
	cin>>x1>>y1>>x2>>y2>>x3>>y3;
	int max=y1,min=x1,F=0;
	if(x2<min) min=x2;
	if(x3<min) min=x3;
	if(y2>max) max=y2;
	if(y3>max) max=y3;
	for(int i=min;i<=max;i++)
	{
		int p=0;
		if(i>=x1 && i<y1 ) p++;
		if(i>=x2 && i<y2) p++;
		if(i>=x3 && i<y3) p++;
		if(p==1)
		F+=a;
		else if(p==2)
		F+=(2*b);
		else if(p==3)
		F+=(3*c);
		
	}
	cout<<F;
	return 0;
}
