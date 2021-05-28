#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    vector<long long>a(n+1);

    for(long long i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    sort(a.begin(),a.end());

    if(a[n]>=a[n-1]+a[n-2])
    {
        cout<<"NO";
    }
    else
    {
        cout<<"YES\n";

        cout<<a[n-1]<<" "<<a[n]<<" "<<a[n-2];
        for(long long  i=1;i<=n-3;i++)
        {
            cout<<" "<<a[i];
        }

    }

    return 0;
}
