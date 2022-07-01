#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    read:
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        long long sum=0;
        for(int i=0;i<n-1;i++)
        {
            sum+=a[i];
        }

        if(sum==a[n-1] and a[n-1]==0)
        {
            cout<<0<<endl;
            goto read;
        }
        else if(sum>=a[n-1])
        {
            cout<<1<<endl;
            goto read;
        }
        else
        {
            cout<<abs(sum-a[n-1])<<endl;
            goto read;
        }
    }
    return 0;
}
