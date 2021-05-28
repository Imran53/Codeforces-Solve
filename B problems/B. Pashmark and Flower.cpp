#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    long long a[n],mn=0,mx=0;
    for(long long i=0;i<n;i++)
        cin>>a[i];

    sort(a,a+n);
    if(a[0]==a[n-1])
    {
        cout<<0<<" "<<(n*(n-1))/2;
        return 0;
    }

    for(long long i=0;i<n;i++)
    {
        if(a[i]==a[0])
            mn++;
        if(a[i]==a[n-1])
            mx++;
    }

    cout<<a[n-1]-a[0]<<" "<<mn*mx;
    return 0;
}
