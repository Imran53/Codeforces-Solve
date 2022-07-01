#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    read:
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int a[n+1];
        bool ok=0;
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        int cnt=0;
        for(int i=1;i<n;i++)
        {
            if(a[i]>=a[i+1])
                continue;
            else
            {
                a[i]+=1;
                k--;
                cnt=i;
                ok=1;
                i=0;
            }
            if(k==0)
            {
                cout<<cnt<<endl;
                goto read;
            }



        }
      cout<<-1<<endl;

    }
    return 0;
}
