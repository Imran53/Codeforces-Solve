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
            int ok=0,cnt=0;
        for(int i=n;i>1;i--)
        {
            if(a[i-1]>=a[i])
            {
                while(a[i-1]>=a[i])
                {
                    a[i-1]/=2;
                    cnt++;
                    if(a[i-1]==0)
                    {
                       // ok=1;
                        break;
                    }
                }
            }
        }
        for(int i=1;i<=n-1;i++)
        {
            if(a[i]<a[i+1])
            {
               continue;
            }
            else
                ok=1;
        }
        if(ok==1)
            cout<<-1<<endl;
        else
            cout<<cnt<<endl;
    }
    return 0;
}
