#include <iostream>
using namespace std;
int main()
{ int x,y,n,t,g=0;
cin>>n>>x>>y;
int a,b;
a=n/x;
b=n/y;
 for(int i=0;i<=a;i++)
 { for(int j=0;j<=b;j++)
  {t=i*x+j*y;
  if(t==n){
  a=i;b=j;
  g=1;
 }
 }
 }
if(g==1) cout<<a<<" "<<b;
else cout<<-1;
return 0;
}
