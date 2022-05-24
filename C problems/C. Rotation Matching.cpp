#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n+1],b[n+1],aa[n+1],bb[n+1];
    vector<int>cc(n,0);

    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        aa[a[i]]=i;
    }
    int c=0,ans=0,k=0;
    for(int i=1;i<=n;i++)
    {
        cin>>b[i];
        c=aa[b[i]]-i;
        if(c<0)
        {
            c=n+c;
        }
        cc[c]++;
        k=cc[c];
        ans=max(ans,k);
    }

   /* for(int i=0;i<n;i++)
    {
        ans=max(ans,cc[i]);
    } */
    cout<<ans<<endl;
    return 0;
}
