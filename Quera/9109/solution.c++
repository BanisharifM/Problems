#include <iostream>
using namespace std;
int main()
{
	int n;
	int a[101]={0};
	cin>>n;
	int x;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		a[x]++;
	}
	int min=101,index;
        for(int i=1;i<101;i++)
        {
            if(a[i]<min&&a[i]!=0)
            {
                min=a[i];
                index=i;
            }
        }
        cout<<index;
	return 0;
}
