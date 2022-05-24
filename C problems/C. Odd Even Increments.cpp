#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];

        for(int i=0;i<n;i++)
        {
            cin>>a[i];
           // e+=a[i];
        }
        int e=a[0]%2, o=a[1]%2;
        bool ok=0;
        for(int i=0;i<n;i+=2)
        {
            if(e!=a[i]%2)
                ok=1;
        }
        for(int i=1;i<n;i+=2)
        {
            if(o!=a[i]%2)
                ok=1;
        }
        if(ok==0)
            cout<<"YES\n";
        else
            cout<<"NO\n";

    }
    return 0;
}
