#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int a[n],ans=-1;
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    if(k!=0)
    {
        if(a[k-1]!=a[k])
            ans=a[k-1];
    }
    else
    {
        if(a[0]!=1)
            ans=1;
    }
    cout<<ans<<endl;
    return 0;
}
