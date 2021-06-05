#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n+1],b[n+1],aa=0,bb=0;

    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1;i<=n;i++)
        cin>>b[i];

    for(int i=1;i<=n;i++)
    {
        if(a[i]>b[i])
            aa++;
        if(b[i]>a[i])
            bb++;
    }

    if(aa==0)
        cout<<-1;
    else
        cout<<bb/aa+1;
    return 0;
}
