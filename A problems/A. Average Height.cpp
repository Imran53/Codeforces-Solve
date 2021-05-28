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
        vector<int>a(n),v,vv;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]%2==1)
                v.push_back(a[i]);
            else
                vv.push_back(a[i]);
        }

        for(int i=0;i<v.size();i++)
            cout<<v[i]<<" ";
        for(int i=0;i<vv.size();i++)
            cout<<vv[i]<<" ";
        cout<<endl;
    }
    return 0;
}
