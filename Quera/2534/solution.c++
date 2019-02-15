#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    int n,sum=0,mid,k;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    mid=sum/n;
    sum=0;
    for(int i=0;i<n;i++)
    {
        k=mid-a[i];
        if(k>0)
            sum+=k;
    }
    cout<<sum;
    return 0;
}
