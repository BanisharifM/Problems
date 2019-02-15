#include <iostream>
using namespace std;

int main()
{
	int n;
	double m,x;
	cin>>n>>m;
	x=n/(m*m);
	 cout.precision(2);
  cout <<   fixed    << x << endl;
if(x<18.5) cout<<"Underweight";
if(x<25 && (x>18.5 || x==18.5)) cout<<"Normal";
if(x<30 && (x>25 || x==25)) cout<<"Overweight";
if(x>30 || x==30) cout<<"Obese";
	return 0;
}
