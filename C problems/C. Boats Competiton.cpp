#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n+1];
        for(int i=1; i<=n; i++)
        {
            cin>>a[i];
        }
        sort(a+1,a+n+1);

        int ans=0;

        for(int i=1; i<=2*n; i++)
        {
            int l=1,h=n;
            int cnt=0;
            while(l<h)
            {
                if(a[l]+a[h]>i)
                {
                    h--;
                }
                else if(a[l]+a[h]<i)
                {
                    l++;
                }
                else
                {
                    cnt++;
                    l++;
                    h--;
                }
            }
            ans=max(ans,cnt);
        }
        cout<<ans<<endl;
    }
    return 0;
}
