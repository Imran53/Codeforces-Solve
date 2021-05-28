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
        int a[n],sum=0,o=0,t=0;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            if(a[i]==1)
                o++;
            else
                t++;
            sum+=a[i];
        }

        if(sum%2==1)
            cout<<"NO\n";

        else
        {
            if(o>1)
                cout<<"YES\n";
            else if(t%2==0)
                cout<<"YES\n";
            else
                cout<<"NO\n";
        }

    }

    return 0;
}
