#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    read:
    while(t--)
    {
        long long n,k,mx=-10000000000;
        cin>>n>>k;
        long long a[n];
        for(long long i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]>mx)
                mx=max(mx,a[i]);

        }

        long long o=0,kk=1,mxx=0;
        if(k%2==1)
        {
            for(long long i=0;i<n;i++)
            {
                a[i]=mx-a[i];
            }
            for(int i=0;i<n;i++)
            {
                cout<<a[i]<<" ";
            }
            cout<<endl;
            goto read;

        }
        else
        {
            while(k!=0)
            {
                for(long long i=0;i<n;i++)
                {
                    a[i]=mx-a[i];
                    if(a[i]>mxx)
                    {
                      mxx=max(mxx,a[i]);
                    }

                }

                for(long long i=0;i<n;i++)
                {
                    a[i]=mxx-a[i];
                }

                for(long long i=0;i<n;i++)
                {
                    cout<<a[i]<<" ";
                }
                cout<<endl;
                k--;
                goto read;
            }
        }

    }

    return 0;
}
