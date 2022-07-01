#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    read:
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int a[n],b[n],ok=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            b[i]=a[i];
        }
        sort(b,b+n);


            for(int i=n-x;i<x;i++)
            {
                if(a[i]!=b[i])
                {
                    ok=1;
                    break;
                }
            }

        if(ok==1)
            cout<<"NO\n";
        else
            cout<<"YES\n";
    }
    return 0;
}
