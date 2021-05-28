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
        if(n%2==0)
        {
           ll s=n/2;
           ll sq=sqrt(s);
           if(sq*sq==s)
           {
               cout<<"YES\n";
               goto read;
           }

        }
        if(n%4==0)
        {
            ll s=n/4;
            ll sq=sqrt(s);
            if(sq*sq==s)
            {
                cout<<"YES\n";
                goto read;
            }
        }
        cout<<"NO\n";
    }

    return 0;
}
