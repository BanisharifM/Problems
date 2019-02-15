#include <iostream>
using namespace std;
int main() 
{
	int l;
	string s;
	cin>>s;
	l=s.length();
	for(int i=0;i<l;i++)
	{
		for(int j=0;j<l;j++)
		{
			if(j<=i) cout<<s[i];
			else cout<<s[j];
		}
		cout<<endl;
	}
		return 0;
}
