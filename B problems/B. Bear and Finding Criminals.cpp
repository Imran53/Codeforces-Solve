#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,cnt=0;
    cin>>n>>k;
    vector<int>a(n+1);

    for(int i=1;i<=n;i++)
        cin>>a[i];
    if(a[k]==1)
        cnt++;

    int r=min(k-1,n-k);

    for(int i=k+r+1;i<=n;i++)
    {
        if(a[i]==1)
            cnt++;
    }

    for(int i=k-r-1;i>=1;i--)
    {
        if(a[i]==1)
            cnt++;
    }

    for(int i=1;i<=r;i++)
    {
        if(a[k+i]==1 and a[k-i]==1)
        {
            cnt+=2;
        }
    }
    cout<<cnt<<endl;
    return 0;
}
