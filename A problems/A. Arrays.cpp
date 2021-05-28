#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,x,y,cnt=0;
    cin>>n>>m>>x>>y;
    long long a[n],b[m];

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(int j=0;j<m;j++)
    {
        cin>>b[j];
    }

    if(a[x-1]<b[m-y])
        cout<<"YES\n";
    else
        cout<<"NO\n";

    return 0;
}
