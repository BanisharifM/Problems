#include <iostream>

using namespace std;

int main()
{
    char a[7][7];
    int t=0;
    for(int i=0;i<7;i++)
        for(int j=0;j<7;j++)
            cin>>a[i][j];
    for(int i=0;i<7;i++)
    {
        for(int j=0;j<7;j++)
        {
            if(a[i][j]=='o')
            {
                if(a[i][j+1]=='o'&&j+2<7&&a[i][j+2]=='.')
                    t++;
                if(a[i][j-1]=='o'&&j-2>=0&&a[i][j-2]=='.')
                    t++;
                if(a[i+1][j]=='o'&&i+2<7&&a[i+2][j]=='.')
                    t++;
                if(a[i-1][j]=='o'&&i-2>=0&&a[i-2][j]=='.')
                    t++;
            }
        }
    }
    cout<<t;
    return 0;
}
