#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll n,g;
    cin>>n;
    ll a[n];
    cin>>a[0];
    g=a[0];
    for(ll i=1; i<n; i++)
    {
        cin>>a[i];
        g=__gcd(g,a[i]);
    }

    ll ans=0;
    for(ll i=1; i*i<=g; i++)
    {
        if(g%i==0)
        {
            ans++;
            if(i*i!=g)
                ans++;
        }

    }

    cout<<ans<<endl;
    return 0;
}
