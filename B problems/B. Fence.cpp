#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int a[n+1];
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    int sum=0,msum,ans=1;
    for(int i=1;i<=k;i++)
    {
        sum+=a[i];
    }
    msum=sum;

    for(int i=k+1;i<=n;i++)
    {
        sum=sum-a[i-k]+a[i];
        if(sum<msum)
        {
            ans=i-k+1;
            msum=sum;
        }
    }
    cout<<ans<<endl;
    return 0;

}

