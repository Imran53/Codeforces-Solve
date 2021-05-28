#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int>a(n+1),v;
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
            if(a[i]%2==1)
                v.push_back(i);
        }
        if(v.size()>=k)
        {
            cout<<"YES\n";
            for(int i=0;i<k;i++)
                cout<<v[i]<<" ";
            cout<<endl;
        }
        else
            cout<<"NO\n";

    }

    return 0;
}
