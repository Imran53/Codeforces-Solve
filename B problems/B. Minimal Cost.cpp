#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    read:
    while(t--)
    {
        int n,u,v;
        cin>>n>>u>>v;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
            int ok=0,okk=0,ans=INT_MAX;
        for(int i=0;i<n-1;i++)
        {
            if(abs(a[i]-a[i+1])>1)
            {
                ans=0;
                break;

            }
            else if(abs(a[i]-a[i+1])==0)
                ans=min(ans,min(2*v,(u+v)));
            else
                ans=min(ans,min(u,v));
        }
        cout<<ans<<endl;
    }
    return 0;
}
