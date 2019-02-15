#include <iostream>

using namespace std;

int main()
{
    int m,n,k=0;
    cin>>m>>n;
	int a[2][m],b[2][n];
	for(int i=0;i<m;i++)
		cin>>a[0][i]>>a[1][i];
	for(int i=0;i<n;i++)
		cin>>b[0][i]>>b[1][i];
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
        {
            for(int t=b[0][j];t<=b[1][j];t++)
            {
                if(t>=a[0][i]&&t<=a[1][i])
                    k++;
            }
        }
	}
	cout<<k;
    return 0;
}
