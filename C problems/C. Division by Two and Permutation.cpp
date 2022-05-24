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
            cin>>a[i];
        vector<bool>v(n,false);
        int b;
        bool ok=0;
        for(int i=0;i<n;i++)
        {
            b=a[i];
            while(b>n)
                b=b/2;
            while(v[b]==true)
            {
                b/=2;
                if(b==0)
                {
                    ok=1;
                    break;
                }
            }
            v[b]=true;

        }

        if(ok==1)
            cout<<"NO\n";
        else
            cout<<"YES\n";


    }
    return 0;
}
