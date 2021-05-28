#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    read:
    while(t--)
    {
        ll n;
        cin>>n;
        n*=4;
        ll a[n];
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        ll l=0,r=n-1;
        ll s=a[l]*a[r];

        while(l<r)
        {
            if(a[l]!=a[l+1] or a[r]!=a[r-1] or s!=a[l]*a[r])
            {
                cout<<"NO\n";
                goto read;
            }
            l+=2;
            r-=2;
        }
        cout<<"YES\n";

    }

    return 0;
}
