#include <iostream>

using namespace std;

int main()
{
    long int n;
    cin>>n;
    long long int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    long long int k,max;
    k=max=a[0];
    for(int i=1;i<n;i++)
    {
        k+=a[i];
        if(k>max)
            max=k;
    }
    if(max<0)
        max=0;
    cout<<max;
    return 0;
}
