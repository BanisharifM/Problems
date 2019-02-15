#include <iostream>

using namespace std;

int main()
{
    string s1[3],s2[3];
    for(int i=0;i<3;i++)
        {
            cin>>s1[i]>>s2[i];
            if(s2[i]=="U")
               i--;
        }
        if(s2[0]!=s2[1])
        {
            if(s2[1]==s2[2])
                cout<<s1[1];
            else
                cout<<s1[0];
        }
        else
        {
            if(s2[1]==s2[2])
                cout<<s1[1];
            else
                cout<<s1[0];
        }

    return 0;
}
