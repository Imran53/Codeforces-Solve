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
        vector<int>a(n),b(n),c(n),ans;

        for(int i=0; i<n; i++)
            cin>>a[i];
        for(int i=0; i<n; i++)
            cin>>b[i];
        for(int i=0; i<n; i++)
            cin>>c[i];

        ans.push_back(a[0]);

        for(int i=1; i<n; i++)
        {
            if(a[i]!= ans.back() and a[i]!= ans[i%(n-1)])
                ans.push_back(a[i]);
            else if(b[i]!= ans.back() and b[i]!=ans[i%(n-1)])
                ans.push_back(b[i]);
            else if(c[i]!= ans.back() and c[i]!= ans[i%(n-1)])
                ans.push_back(c[i]);
        }

        for(int i=0;i<ans.size();i++)
        {
            cout<<ans[i]<<" ";
        }

        cout<<endl;
    }
    return 0;
}
