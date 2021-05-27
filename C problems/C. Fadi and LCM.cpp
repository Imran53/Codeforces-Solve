#include<bits/stdc++.h>
using namespace std;
long long lcm(long long a,long long b)
{
    return (a*b)/(__gcd(a,b));
}

int main()
{
    long long n,ans=0;
    cin>>n;
    for(long long i=1;i*i<=n;i++)
    {
        if(n%i==0 and (lcm(i,n/i))==n)
            ans=i;
    }
    cout<<ans<<" "<<n/ans<<endl;
    return 0;
}
