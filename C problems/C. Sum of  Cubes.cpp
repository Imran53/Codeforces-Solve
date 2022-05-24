#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    read:
    while(t--)
    {
        long long n;
        cin>>n;
        for(long long i=1;i*i*i<n;i++)
        {
            long long r=cbrt(n-(i*i*i));
            if(r*r*r==(n-i*i*i))
            {
                cout<<"YES\n";
                goto read;
            }
        }
        cout<<"NO\n";
    }
    return 0;
}
