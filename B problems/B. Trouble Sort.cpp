#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,z=0,o=0;
        cin>>n;
        int a[n],b[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            b[i]=a[i];
        }
        sort(b,b+n);
        for(int i=0;i<n;i++)
        {
            int k;
            cin>>k;
            if(k==0)
                z++;
            else
                o++;
        }

        if(z!=0 and o!=0)
        {
            cout<<"Yes\n";
        }
        else
        {
            bool ok=0;
            for(int i=0;i<n;i++)
            {
                if(a[i]!=b[i])
                {
                     ok=1;
                     break;
                }

            }
            if(ok==0)
                cout<<"Yes\n";
            else
                cout<<"No\n";
        }
    }
    return 0;
}
