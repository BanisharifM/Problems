#include <iostream>

using namespace std;

int main()
{
    int sum=0;
    int A;
    int n;
    cin>>n;
    int m;
    cin>>m;
    int a[n][n];
    int b[m][2];
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
           cin>>a[i][j];
    for(int i=0;i<m;i++)
    {
        cin>>b[i][0]>>b[i][1];
        A=a[b[i][0]-1][b[i][1]-1];
        sum+=A;

    }
    cout<<sum;
    return 0;
}
