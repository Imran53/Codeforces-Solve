#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n+1];

    for(int i=1;i<=n;i++)
        cin>>a[i];
    if(n==1)
    {
        cout<<1;
        return 0;
    }

    int maxx=0;

    for(int i=1;i<=n;i++)
    {
        int cnt=1;

        for(int j=i-1;j>=1;j--)
        {
            if(a[j]>a[j+1])
            {
                break;
            }
            cnt++;
        }

    for(int j=i+1;j<=n;j++)
    {
        if(a[j]>a[j-1])
        {
            break;
        }

        cnt++;
    }

    maxx=max(maxx,cnt);

    }
    cout<<maxx;
    return 0;
}
