#include <iostream>

using namespace std;
void f(int *,int,int);
int main()
{
    int b,l,t=1;
    cin>>b>>l;
    while(t<l)
        t*=2;
    int *a=new int [t];
    f(a,0,t);
    for(int i=b-1;i<l;i++)
        cout<<a[i];
    cout<<endl;
    return 0;
}
void f(int *a,int low,int high)
{
    int mid=(low+high)/2,k;
    if(low>=mid)
        a[low]=1;
    else
    {
        f(a,low,mid);
        for(int i=mid;i<high;i++)
        {
            k=a[i-mid];
            if(k==0)
                a[i]=1;
            else
                a[i]=0;
        }
    }
}
