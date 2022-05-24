#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,m;
        cin>>n>>m;
        long long a[n+1];
        for(int i=1;i<=n;i++)
            cin>>a[i];

        sort(a+1,a+n+1);
        long long sum=0,ans=0;
        for(int i=1;i<=n;i++)
        {

            sum+=a[i];
            if(sum<=m)
            {
                ans+=((m-sum)/i)+1;
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}
