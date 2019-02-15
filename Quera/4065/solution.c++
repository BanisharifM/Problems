#include <iostream>
using namespace std;

int main() 
{
	int a,b,l,x;
	cin>>a>>b>>l;
	if(l%2==0) cout<<l/2*(a+b);
	if(l%2==1) cout<<((l-1)/2*(a+b))+a;
	return 0;
}
