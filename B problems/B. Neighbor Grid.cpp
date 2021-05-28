#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,cnt=0;
        cin>>n>>m;
        int a;
        bool ok=0;
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=m; j++)
            {
                cnt=0;
                cin>>a;
                if(i>1)
                    cnt++;
                if(j>1)
                    cnt++;
                if(i<n)
                    cnt++;
                if(j<m)
                    cnt++;
                if(a>cnt)
                    ok=1;
            }
        }

        if(ok==0)
        {
            cout<<"YES\n";
            for(int i=1; i<=n; i++)
            {

                for(int j=1; j<=m; j++)
                {
                    int cnt=0;
                    if(i>1)
                        cnt++;
                    if(j>1)
                        cnt++;
                    if(i<n)
                        cnt++;
                    if(j<m)
                        cnt++;
                    cout<<cnt<<" ";
                }
                cout<<endl;
            }

        }
        else
        {
            cout<<"NO\n";
        }
    }

    return 0;
}
