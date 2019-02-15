#include <iostream>
using namespace std;
int main() 
{
	int n,x,k;
	cin>>n>>x>>k;
	x--;
	string s[n];
	for(int i=0;i<n;i++)
	cin>>s[i];
	cout<<s[((x+k)%n)];
	return 0;
}
