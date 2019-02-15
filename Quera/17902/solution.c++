#include <iostream>

using namespace std;

int main()
{
    int k,sum=0;
    string pass,x;
    cin>>k>>pass;
    for(int i=0;i<k;i++)
    {
        cin>>x;
        for(int j=0;j<9;j++)
            if(pass[i]==x[j])
            {
                if(j<5)
                    sum+=j;
                else
                    sum+=(9-j);
                break;
            }
    }
    cout<<sum;
    return 0;
}
