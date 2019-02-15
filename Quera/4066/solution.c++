#include <iostream>
using namespace std;
int main()
{
	  int n,m;
      cin>>n>>m;
      string s1 [2][n] ;
      string s2 [m];
      for(int i=0;i<n;i++)
      {
      cin>>s1[0][i];
      cin>>s1[1][i];
      }
      for(int i=0;i<m;i++)
          cin>>s2[i];
      for(int i=0;i<m;i++)
      {
         for(int j=0;j<n;j++)
         {
             if(s2[i]==s1[0][j])
             {
                 cout<<s1[1][j]<<" kachal!";
                 break;
             }
             if(j==n-1) cout<<"kachal!";
         }
         cout<<" ";
      }
	return 0;
}
