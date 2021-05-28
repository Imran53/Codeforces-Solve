#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(), cout.tie();

    int t;
    cin>>t;
    read:
    while(t--)
    {
    int m,n;
    cin>>m>>n;
    int a[m+1],bb[m+1];
    for(int i=1;i<=m;i++)
    {
        cin>>a[i];
        bb[i]=a[i];
    }
    sort(bb+1,bb+m+1);

    int b[n+1];
    for(int i=1;i<=n;i++)
    {
        cin>>b[i];
    }
    bool ok=0;

    while(ok==0)
    {
        ok=1;
        for(int i=1;i<=n;i++)
        {
            if(a[b[i]]>a[b[i]+1])
            {
                ok=0;
                swap(a[b[i]],a[b[i]+1]);
            }
        }
    }
    for(int i=1;i<=m;i++)
    {
        if(a[i]!=bb[i])
        {
            cout<<"NO\n";
            goto read;
        }
    }
    cout<<"YES\n";
    }

    return 0;

}
