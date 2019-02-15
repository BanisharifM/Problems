#include"iostream"
using namespace std;

int main()
{
	int a,k;
	cin >> k;
	a = k / 2;
	a = k - 2 * a;
	if (k<101 && k>0)
	{
		if (a == 0)
		{
			cout << "Bala Barare";
		}

		if (a == 1)
		{
			cout << "Payin Barare";
		}
	}

    return 0;
}

