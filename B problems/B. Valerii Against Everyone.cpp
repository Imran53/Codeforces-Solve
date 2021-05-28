#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,s=0,sum=0;
        cin>>n;
        long long a[n];
        for(long long i=0;i<n;i++)
            cin>>a[i];

        sort(a,a+n);
        s=pow(2,a[n-1]);

        for(int i=0;i<n-1;i++)
        {
            sum+=pow(2,a[i]);
        }

        if(s==sum)
            cout<<"YES\n";
        else
            cout<<"NO\n";

    }
    return 0;
}
