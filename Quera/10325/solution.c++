
#include"iostream"
using namespace std;

int main()
{
	int a, b,r,c;
	cin >> r >> c;
	if (r>0 && r<21 && c>0 && c<21)
	{
		if (c<11)
		{
			a = 11 - r;
			b = c;
			cout << "Right " << a << " " << b;
		}
		if (c>10)
		{
			a = 11 - r;
			b = 21 - c;
			cout << "Left " << a << " " << b;

		}


	}
	return 0;
}

