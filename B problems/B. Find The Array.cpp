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
        long long a[n],e=0,o=0;
        for(int i=0;i<n;i++)
            cin>>a[i];

        for(int i=0;i<n;i+=2)
            e+=a[i];
        for(int i=1;i<n;i+=2)
            o+=a[i];

        if(e>o)
        {
            for(int i=0;i<n;i++)
            {
                if(i%2!=0)
                    cout<<1<<" ";
                else
                    cout<<a[i]<<" ";
            }
        }

        else
        {
            for(int i=0;i<n;i++)
            {
                if(i%2!=0)
                    cout<<a[i]<<" ";
                else
                    cout<<1<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}
