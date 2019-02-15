#include <iostream>

using namespace std;

int main()
{
    int n,d,r;
    cin>>n>>d;
    int a[n][3];
    for(int i=0;i<n;i++)
        cin>>a[i][0]>>a[i][1]>>a[i][2];
    int t=0,l=0,i=0;
    while(l<d)
    {
        t++;
        l++;
        if(l==a[i][0])
        {
           r=t%(a[i][1]+a[i][2]);
           if(r<a[i][1])
                t+=a[i][1]-r;
          i++;
        }
    }
    cout<<t;
    return 0;
}
