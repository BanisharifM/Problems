#include <iostream>

using namespace std;

int main()
{
    int x,y,r,a,b;
    cin>>x>>y>>r>>a>>b;
    if(a>=x&&a<=x+r&&b<=y&&b>=y-r)
        cout<<"Mahdi";
    else
        cout<<"Parsa";
    return 0;
}
