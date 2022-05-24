#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        long long a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        long long e=a[0],o=a[1];
        for(int i=2;i<n;i+=2)
            e=__gcd(e,a[i]);

        for(int i=3;i<n;i+=2)
            o=__gcd(o,a[i]);
        long long ee=e,oo=o;
        for(int i=1;i<n;i+=2)
        {
            if(a[i]%e==0)
                ee=0;
        }
        for(int i=0;i<n;i+=2)
        {
            if(a[i]%o==0)
            {
                oo=0;
            }
        }

        cout<<max(ee,oo)<<endl;
    }
    return 0;
}
