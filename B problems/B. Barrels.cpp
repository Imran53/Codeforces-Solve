#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int a[n];

        for(int i=0;i<n;i++)
            cin>>a[i];

        sort(a,a+n,greater<int>());
        long long s=a[0];

        for(int i=1;i<=k;i++)
            s+=a[i];

        cout<<s<<endl;
    }

    return 0;
}
