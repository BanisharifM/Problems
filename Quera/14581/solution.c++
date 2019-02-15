#include <iostream>
using namespace std;
int main()
{
	long long  int n,k;
	float a,x;
	cin>>n;
	/*if(n==2)
	{
	x=1;
	n++;
    }*/
	if(n%2==1)
	{
	k=(n-1)/2;
	x=k*(k+1);
	n++;
    }
    
    else
    {
    	k=n/2;
    	x=(k-1)*k;
    	x+=n/2;
    	n++;
    }
	printf("%06f",x/n);
	return 0;
}
