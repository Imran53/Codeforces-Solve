#include<bits/stdc++.h>
using namespace std;
int main()
{

        int n;
        cin>>n;
        string s;

        map<string,int>m;
        int ans=0;
        for(int i=0;i<n;i++)
        {
            cin>>s;
            m[s]++;
            ans=max(ans,m[s]);

        }
        cout<<ans;

    return 0;
}
