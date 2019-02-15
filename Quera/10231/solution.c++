#include <iostream>
#include<string>
using namespace std;
int main() 
{
    int F=0;
    string s[5],s1,s2,s3;
    s1="MOLANA";
    s2="HAFEZ";
    for(int i=0;i<5;i++)
     cin>>s[i];
     for(int i=0;i<5;i++)
     {
     	if(F==1)
     	F=2;
       int l=s[i].length(),l1=s1.length(),l2=s2.length();
       
       for(int j=0;j<l;j++)
       {
	       	s3=s1;
	       	for(int k=j;k<j+l1;k++)
	       	s3[k-j]=s[i][k];
	       	if(s3==s1)
	       	{
	       	 F=1;
	       	 cout<<i+1<<" ";
			 break;	
			}
			s3=s2;
			if(F!=1)
			{
				for(int k=j;k<j+l2;k++)
		       	s3[k-j]=s[i][k];
		       	if(s3==s2)
		       	{
		       	 F=1;
		       	 cout<<i+1<<" ";
				 break;	
				}
		    }
	   }
	 }
	 if(F==0)
	 cout<<"NOT FOUND!";

	return 0;
}
