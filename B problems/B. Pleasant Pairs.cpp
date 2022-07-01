#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        long long a[n+1];
        for(long long i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        long long cnt=0;
        for(long long i=1;i<=n;i++)
        {
            long long j=a[i]-i;
            while(j<=i) j+=a[i];
            while(j<=n)
            {
                if(a[i]*a[j]==i+j)
                {
                    cnt++;
                }
                j+=a[i];
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
