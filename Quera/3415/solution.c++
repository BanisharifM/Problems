#include <iostream>

using namespace std;

int main()
{
    int n,t,k=0;
    cin>>n;
    int a[n][2];
    for(int i=0;i<n;i++)
        cin>>a[i][0]>>a[i][1];
    for(int i=n-1;i>=0;i--)
    {
        for(int j=0;j<i;j++)
        {
            if(a[j][0]>a[j+1][0])
            {
                t=a[j][0];
                a[j][0]=a[j+1][0];
                a[j+1][0]=t;
                t=a[j][1];
                a[j][1]=a[j+1][1];
                a[j+1][1]=t;
            }
            if(a[j][0]==a[j+1][0])
            {
                if(a[j][1]<a[j+1][1])
                {
                    t=a[j][1];
                    a[j][1]=a[j+1][1];
                    a[j+1][1]=t;
                }
            }
        }
    }
    for(int i=1;i<n;i++)
    {
        for(int j=i-1;j>=0;j--)
        {
            if(a[i][1]<=a[j][1])
            {
                k++;
                break;
            }
        }
    }
    cout<<n-k;
    return 0;
}
