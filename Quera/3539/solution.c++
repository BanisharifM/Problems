#include <iostream>
using namespace std;

int main()
{
	long long int n,i=0,q=1,r,s=0;
	cin>>n;
	while(true)
	{   q=1;
	    s=0;
		while(q!=0)
		{
			q=n/10;
			r=n-q*10;
			s+=r;
			n=q;
		}
		n=s;
		if((n/10)==0) break;
	}
	cout<<n;
	return 0;
}
