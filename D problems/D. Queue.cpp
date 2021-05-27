#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin>>n;
    ll a[n],sum=0,cnt=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);

    for(int i=0;i<n;i++)
    {
        if(a[i]>=sum)
        {
            cnt++;
            sum+=a[i];
        }
    }
    cout<<cnt<<endl;
    return 0;

}
