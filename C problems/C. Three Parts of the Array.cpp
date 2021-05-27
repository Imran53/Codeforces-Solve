#include<bits/stdc++.h>
#define ll long long
using namespace std;

main()
{
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++)
        cin>>a[i];
    ll l=0,r=n-1,s1=0,s2=0,ans=0;

    while(l<=r)
    {
        if(s1==s2)
        {
            ans=max(ans,s1);
            s1+=a[l];
            l++;

        }

        else if(s1>s2)
        {
            s2+=a[r];
            r--;
        }

        else if(s1<s2)
        {
            s1+=a[l];
            l++;
        }
    }

    if(s1==s2)
        ans=max(ans,s1);


   cout<<ans;
    return 0;
}
