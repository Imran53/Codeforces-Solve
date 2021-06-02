#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll x,y,n,ans=0;
    cin>>x>>y>>n;
    n%=6;
    if(n==1)
        ans=x%1000000007;
    else if(n==2)
        ans=y%1000000007;
    else if(n==3)
        ans=(y-x)%1000000007;
    else if(n==4)
        ans=(-x)%1000000007;
    else if(n==5)
        ans=(-y)%1000000007;
    else
        ans=(x-y)%1000000007;

    if(ans<0)
        cout<<ans+1000000007<<endl;
    else
        cout<<ans<<endl;

    return 0;

}
