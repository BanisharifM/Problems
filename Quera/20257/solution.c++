#include<iostream>
using namespace std;
int main()
{
    int a,b,k;
    cin>>k>>a>>b;
    int sum=0,r1,r2;
     if(a<0)
        a*=-1;
     if(b<0)
        b*=-1;
     r1=a%k;
    r2=b%k;
    sum+=min(r1,k-r1+1);
    sum+=min(r2,k-r2+1);
    sum+=(a/k)+(b/k);
    cout<<sum;

}
