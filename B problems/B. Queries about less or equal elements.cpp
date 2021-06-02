#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,ans=0;
    cin>>n>>m;
    vector<int>a(n),b(m);
    for(int i=0;i<n;i++)
        cin>>a[i];

    for(int i=0;i<m;i++)
        cin>>b[i];
    sort(a.begin(),a.end());
    for(int i=0;i<m;i++)
    {
        ans=upper_bound(a.begin(),a.end(),b[i])-a.begin();
        cout<<ans<<" ";
    }
    return 0;

}
