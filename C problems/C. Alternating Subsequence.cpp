#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,p=0,pls=0,m=0,mns=0,cntpls=0,cntmns=0;
        cin>>n;
        long long a[n];
        for(long long i=0; i<n; i++)
        {
            cin>>a[i];
        }

        for(long long i=0; i<n; i++)
        {
            if(a[i]>0)
            {
                p=pls;
                if(a[i]>p)
                {
                    pls=a[i];
                    cntpls=cntpls+pls-p;
                }
                m=0;
                mns=0;
            }
            else
            {
                m=mns;
                if(a[i]>mns or mns==0)
                {
                    mns=a[i];
                    cntmns=cntmns+mns-m;
                }
                p=0;
                pls=0;
            }

        }
        cout<<cntpls+cntmns<<endl;
    }

    return 0;
}
