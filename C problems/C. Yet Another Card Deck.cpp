#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int c[51]={};

    for(int i=1;i<=n;i++)
    {
        int nn;
        cin>>nn;
        if(c[nn]==0)
        {
            c[nn]=i;
        }
    }

    for(int i=0;i<k;i++)
    {
        int kk;
        cin>>kk;
        cout<<c[kk]<<" ";
        for(int i=1;i<=50;i++)
        {
            if(c[i]<c[kk])
                c[i]=c[i]+1;
        }
        c[kk]=1;
    }
    cout<<endl;
    return 0;
}
