#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,sum=0;
    cin>>n>>t;
    int a[n+1];
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];

    }
    int cnt=0,total=0,ans=0;

    for(int i=1;i<=n;i++)
    {
        cnt++;
        total+=a[i];
        while(total>t)
        {
            cnt--;
            total-=a[i-cnt];
        }
        ans=max(ans,cnt);
    }
    cout<<ans<<endl;
    return 0;
}
