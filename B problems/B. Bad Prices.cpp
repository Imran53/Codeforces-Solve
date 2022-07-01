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
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];

        int mx=1000001,cnt=0;
        for(int i=n-1;i>=0;i--)
        {
            if(a[i]>mx)
                cnt++;
            mx=min(mx,a[i]);
        }
        cout<<cnt<<endl;

    }
    return 0;
}
