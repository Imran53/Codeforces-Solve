#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    read:
    while(t--)
    {
        int n;
        cin>>n;
        if(n==2)
        {
            cout<<-1<<endl;
            goto read;
        }

        int o=1;

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
               cout<<o<<" ";
            o+=2;
            if(o>n*n)
                o=2;
            }
            cout<<endl;

        }
    }
}
