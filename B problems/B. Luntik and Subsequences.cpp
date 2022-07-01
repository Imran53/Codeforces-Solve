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
        int a[n],o=0,z=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]==0)
                z++;
            else if(a[i]==1)
                o++;
        }
        long long ans=pow(2,z)*o;
        cout<<ans<<endl;
    }
    return 0;
}
