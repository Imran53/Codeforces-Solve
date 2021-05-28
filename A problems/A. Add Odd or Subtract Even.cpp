#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;

        if(n==m)
            cout<<0<<endl;

        else if(n>m)

        {
            int nn=abs(n-m);
            if(nn%2==0)
                cout<<1<<endl;
            else
                cout<<2<<endl;
        }
        else
        {
            int mm=abs(m-n);
            if(mm%2==0)
            {
                cout<<2<<endl;
            }
            else
                cout<<1<<endl;
        }

    }

    exit(0);
}
