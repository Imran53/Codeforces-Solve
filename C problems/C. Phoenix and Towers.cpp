#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,x;
        cin>>n>>m>>x;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        cout<<"YES\n";
        for(int i=0;i<n;i++)
        {
            cout<<i%m+1<<" ";
        }
        cout<<endl;
    }

    return 0;
}
