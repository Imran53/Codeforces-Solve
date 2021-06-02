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
        for(int i=0; i<n; i++)
            cin>>a[i];
        vector<int>v;
        for(int i=0; i<n; i++)
        {
            if(i==0 or i==n-1 or a[i]>a[i-1] and a[i]>a[i+1] or a[i]<a[i-1] and a[i]<a[i+1])
                v.push_back(a[i]);
        }
        cout<<v.size()<<endl;
        for(int i=0; i<v.size(); i++)
            cout<<v[i]<<" ";
            cout<<endl;
    }
    return 0;
}
