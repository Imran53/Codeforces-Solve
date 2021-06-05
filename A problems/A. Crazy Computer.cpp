#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n],cnt=0;

    for(int i=0;i<n;i++)
        cin>>a[i];

    for(int i=n-1;i>0;i--)
    {
        if(a[i]-a[i-1]<=m)
        {
            cnt++;
        }
        else
            break;
    }

    cout<<cnt+1<<endl;
    return 0;
}

