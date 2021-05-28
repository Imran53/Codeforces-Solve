#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    read:
    while(t--)
    {
        int n,x=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            x=x ^ a[i];
        }
        if(x==0)
        {
            cout<<"YES\n";
            goto read;
        }
        int xx=0,cnt=0;
        for(int i=0;i<n;i++)
        {
            xx=xx^a[i];
            if(xx==x)
            {
                xx=0;
                cnt++;
            }
        }
        if(cnt>1)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
