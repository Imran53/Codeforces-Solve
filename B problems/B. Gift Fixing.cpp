#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        //int a[n],b[n],c,d,cmin,dmin;

        vector<int>a(n),b(n),c,d;

        for(int i=0;i<n;i++)
            cin>>a[i];

        for(int i=0;i<n;i++)
            cin>>b[i];

        c=a;
        d=b;

       sort(c.begin(),c.end());
       sort(d.begin(),d.end());

        long long result=0;

        for(int i=0;i<n;i++)
        {
            int p=abs(a[i]-c[0]);
            int q=abs(b[i]-d[0]);

            int u=min(p,q);
            int v=max(p,q)-u;

            result+=u+v;
        }

        cout<<result<<endl;
    }

    exit(0);
}
