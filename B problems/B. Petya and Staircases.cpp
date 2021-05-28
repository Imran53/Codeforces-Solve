#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[m];
    for(int i=0;i<m;i++)
        cin>>a[i];

    sort(a,a+m);
    bool ok=0;

    if(a[0]==1 or a[m-1]==n)
    {
        cout<<"NO";
        return 0;
    }

    else
    {
        for(int i=0;i<m;i++)
        {
            if(a[i]+1==a[i+1] and a[i+1]+1==a[i+2] )
            {
                ok=1;
                break;
            }
        }
    }

    if(ok==0)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
