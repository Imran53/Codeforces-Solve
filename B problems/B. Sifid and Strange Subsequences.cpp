#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,cnt=0,ans=0,mn=999999999;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]<=0)
                cnt++;
            else
                mn=min(mn,a[i]);
        }
        sort(a,a+n);
        if(n==1)
            ans++;
        else
        {
            bool ok=0;
            for(int i=0;i<n-1 and a[i]<=0 and a[i+1]<=0;i++)
            {
                if(abs(a[i]-a[i+1])<mn)
                    ok=1;
            }
            if(cnt>0 and ok==0)
                ans+=cnt+1;
            else if(cnt>0 and ok==1)
            ans+=cnt;
            else
                ans++;

        }
        cout<<ans<<endl;
    }
    return 0;
}
