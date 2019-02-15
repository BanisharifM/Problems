#include <iostream>
using namespace std;
int main() 
{
	int T;
	cin>>T;
	if(T>100) cout<<"Steam";
	else if(T<0) cout<<"Ice";
	else cout<<"Water";
	return 0;
}
