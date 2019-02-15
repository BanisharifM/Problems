#include <iostream>

using namespace std;

int main()
{
    string a,b,c;
    cin>>a>>c>>b;
    int l1=a.length(),l2=b.length();
    if(c=="*")
    {
        cout<<1;
        for(int i=0;i<l1+l2-2;i++)
            cout<<"0";
    }
    else
    {
        if(l1>l2)
            {a[l1-l2]='1';cout<<a;}
        else if(l1<l2)
            {b[l2-l1]='1';cout<<b;}
        else
            {a[0]='2';cout<<a;}

    }
    return 0;
}
