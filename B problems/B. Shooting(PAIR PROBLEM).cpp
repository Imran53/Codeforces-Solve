#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    pair<int,int>a[n];

    for(int i=0;i<n;i++)
    {
        cin>>a[i].first;
        a[i].second=i+1;
    }

    sort(a,a+n);
    int ans=0,cnt=0;

    for(int i=n-1;i>=0;i--)
    {
        ans+=a[i].first*cnt+1;
        cnt++;
    }

    cout<<ans<<endl;

    for(int i=n-1;i>=0;i--)
    {
        cout<<a[i].second<<" ";
    }

    return 0;
}
