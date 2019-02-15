#include <iostream>
using namespace std;
int main() 
{
	int a[1000],i=0;
	while(true)
	{
	 cin>>a[i];
	  if(a[i]==0) break;
	 i++;
	}
	for(int j=i-1;j>=0;j--)
	{
		cout<<a[j];
		 cout<<"\n";
	}
	
	return 0;
}
