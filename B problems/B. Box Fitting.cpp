#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,w;
        cin>>n>>w;
        int a[n];
        int width[n];
        width[n]=w;

        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            width[i]=w;
        }
        sort(a,a+n,greater<int>());

        for(int i=0;i<n;i++)
        {
            int index=lower_bound(width,width+n,a[i])-width;
            width[index]-=a[i];
        }
        int ans=0;

        while(width[ans]!=w)
            ans++;
        cout<<ans<<endl;
    }

    return 0;
}
