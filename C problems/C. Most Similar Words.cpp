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
        vector<string>a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int mn=1000000001,ans=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                ans=0;
                for(int k=0;k<m;k++)
                {
                    ans+=abs((a[i][k]-'0')-(a[j][k]-'0'));
                }
                mn=min(mn,ans);
            }
        }
        cout<<mn<<endl;
    }

    return 0;
}
