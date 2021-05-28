#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int cnt=0;
        for(int i=0; i<n; i++)
        {
            int a,b,c,d;
            cin>>a>>b>>c>>d;
            if(b==c)
            cnt=1;

        }

        if(m%2==1)
            cnt=0;
        if(cnt)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }

    return 0;

}
