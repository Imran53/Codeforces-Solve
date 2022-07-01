#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        long long a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        int cnt=0,p;
        bool ok=0;
        for(int i=0;i<n-1;i++)
        {
            if(a[i]==a[i+1] and a[i+1]==a[i+2])
            {
                ok=1;
                p=a[i];
                break;
            }

        }
        if(ok==1)
            cout<<p<<endl;
        else
            cout<<-1<<endl;
    }
}
