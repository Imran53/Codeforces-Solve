#include<bits/stdc++.h>
using namespace std;
int main()
{
    int dd,t;
    cin>>dd>>t;
    int mnt[31],mxt[31],d[31],mn=0,mx=0;
    for(int i=0;i<dd;i++)
    {
        cin>>mnt[i]>>mxt[i];
        d[i]=mnt[i];
        mn+=mnt[i];
        mx+=mxt[i];
    }

    if(t<mn or t>mx)
    {
        cout<<"NO";
        return 0;
    }

    cout<<"YES\n";
    t-=mn;

    for(int i=0;i<dd;i++)
    {
        int mnn=mxt[i]-mnt[i];
        if(t>=mnn)
        {
            d[i]+=mnn;
            t-=mnn;
        }
        else
        {
            d[i]+=t;
            t=0;
        }
    }
    for(int i=0;i<dd;i++)
    {
        cout<<d[i]<<" ";
    }
    return 0;

}
