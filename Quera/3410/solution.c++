#include <iostream>
using namespace std;
int main() 
{
	int a[100],b[100];
	int n;
	cin>>n;
	if(n==1) { cout<<1; a[0]=1;}
	else if(n==2) { cout<<1<<endl<<1<<" "<<1; a[0]=a[1]=1;}
	else if(n==3) { cout<<1<<endl<<1<<" "<<1<<endl<<1<<" "<<2<<" "<<1; a[0]=a[2]=1; a[1]=2;}
	else
	{
		cout<<1<<endl<<1<<" "<<1<<endl<<1<<" "<<2<<" "<<1<<endl; a[0]=a[2]=1; a[1]=2;
		for(int i=3;i<n;i++)
		{
			for(int j=0;j<=i;j++)
			{
			     if(j==0||j==i)
			     { cout<<1<<" "; a[0]=a[j]=1;}
			     else
			     {
			     	b[j]=a[j]+a[j-1];
			     	cout<<b[j]<<" ";
			     }
			}
			for(int j=1;j<i;j++)
			a[j]=b[j];
			cout<<endl;
		}
	}
	return 0;
}

