#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,sum1=0,sum2=0;
    cin>>n;
    ll a[n],m[n],mm[n];

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum1+=a[i];
        m[i]=sum1;

    }
    sort(a,a+n);

    for(int i=0;i<n;i++)
    {
        sum2+=a[i];
        mm[i]=sum2;
    }

    ll t;
    cin>>t;
    while(t--)
    {
       ll a,b,c;
       cin>>a>>b>>c;

       if(a==1)
       {
           if(b==1)
            cout<<m[c-1]<<endl;

           else
            cout<<m[c-1]-m[b-2]<<endl;
       }
       else
       {
           if(b==1)
            cout<<mm[c-1]<<endl;

           else
            cout<<mm[c-1]-mm[b-2]<<endl;
       }
    }

    return 0;
}
