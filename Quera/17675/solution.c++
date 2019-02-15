#include <iostream>

using namespace std;

int main()
{
    int n,t,f1=1,f2=2;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(i==1)
        {
            cout<<"+";
            continue;
        }
        if(i<f2)
            cout<<"-";
        else if(i==f2)
        {
            cout<<"+";
            t=f2+f1;
            f1=f2;
            f2=t;
        }
    }
    return 0;
}
