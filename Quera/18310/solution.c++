#include <iostream>

using namespace std;

int main()
{
    string s,p;
    cin>>s>>p;
    bool flag=false;
    for(int i=0;i<s.size();i++)
    {
        for(int j=0;j<=p.size();j++)
        {
            if(j==p.size())
            {
                flag=true;
                break;
            }
            if(p[j]!=s[((j+i)%s.size())])
                break;
        }
        if(flag==true)
            break;
    }
    if(flag==true)
        cout<<"Yes";
    else
        cout<<"No";
    return 0;
}
