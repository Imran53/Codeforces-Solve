#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,member=0,team=0;
        cin>>n;
        int a[n+1];
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        sort(a+1,a+n+1);

        for(int i=1;i<=n;i++)
        {
            member++;
            if(a[i]<=member)
                member=0,team++;
        }
        cout<<team<<endl;
    }
    return 0;
}
