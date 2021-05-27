#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,sum=0;
    cin>>n>>k;
    vector<int>a(n),v;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n-1;i++)
    {
        v.push_back(a[i+1]-a[i]);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n-k;i++)
    {
        sum+=v[i];
    }
    cout<<sum<<endl;
    return 0;
}
