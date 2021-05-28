#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b,x,y,n;
        cin>>a>>b>>x>>y>>n;
        long long aa,bb,nn;
        aa=a;
        bb=b;
        nn=n;

        long long cnta=min(a-x,n);
        n-=cnta;
        a-=cnta;

        if(n>0)
        {
            b-=(b-y,n);
        }
        long long cntaa=a*b;

        long long cntb=min(bb-y,nn);
        nn-=cntb;
        bb-=cntb;

        if(nn>0)
        {
            aa-=min(aa-x,nn);
        }

        long long cntbb=aa*bb;

        cout<<min(cntaa,cntbb)<<endl;

    }
    return 0;
}
