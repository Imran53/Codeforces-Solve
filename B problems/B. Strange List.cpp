#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,x,sum=0;
        cin>>n>>x;
        long long a[n],aa[n];
        for(long long i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
            aa[i]=a[i];
        }

        bool ok=1;
        while(ok!=0)
        {
            for(int i=0;i<n;i++)
            {
                if(aa[i]%x==0)
                {
                    sum+=a[i];
                    aa[i]/=x;
                }

                else
                {
                    ok=0;
                    break;
                }
            }
        }

        cout<<sum<<endl;
    }

    return 0;
}
