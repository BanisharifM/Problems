#include <iostream>

using namespace std;

int main()
{
    int n,k,t=0;
    cin>>n;
    double q=(double)n/2;
    int w=0;
    for(int i=1;i<q;i++)
    {
        for(int j=i;j<q;j++)
        {
            if(i+j<q)
                continue;
            k=n-i-j;
            if(k>=j)
            {
                if(i+j>k&&i+k>j&&k+j>i)
                {
                    t++;
                }
            }
            else
                j=q;
        }
    }
    cout<<t;
    return 0;
}
