#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll a[n],sum=0;
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    sort(a,a+n,greater<ll>());

    ll ans=sum,index=n-1,add=sum;
    while(index>0)
    {
        add-=a[index];
        ans+=add;
        ans+=a[index];
        index--;
    }
    cout<<ans<<endl;
    return 0;
}
