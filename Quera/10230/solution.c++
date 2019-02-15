

#include"iostream"
using namespace std;
int main()
{
	int a, b, c,x;
	cin >> a >> b >> c;

		x = a + b + c;
		if (x==180 && a>0 && b>0 && c>0 && a<180 && b<180 && c<180)
		{
			cout << "Yes";
		}
		else
		{
			cout << "No";
		}


    return 0;
}

