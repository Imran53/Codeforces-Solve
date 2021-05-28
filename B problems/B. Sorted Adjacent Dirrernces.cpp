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
        for(int i=1;i<=n;i++)
            cin>>a[i];
        sort(a+1,a+n+1);

        int l=(n+1)/2,r=l+1;
        for(int i=1;i<=n;i++)
        {
            if(l>=1)
            {
                cout<<a[l]<<" ";
                l--;
            }
            if(r<=n)
            {
                cout<<a[r]<<" ";
                r++;
            }
        }
        cout<<endl;

    }

    return 0;
}
