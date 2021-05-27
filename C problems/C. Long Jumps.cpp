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
        int a[n+1],arr[n+1],ans=0;
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
            arr[i]=a[i];
        }

        for(int i=n;i>=1;i--)
        {
            if(i+arr[i]<=n)
            arr[i]+=arr[i+arr[i]];
                ans=max(ans,arr[i]);
        }

        cout<<ans<<endl;
    }

    return 0;
}
