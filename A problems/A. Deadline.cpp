#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    read:
    while(t--)
    {
        long long n,d;
        cin>>n>>d;
        if(d<=n)
        {
            cout<<"YES\n";
            goto read;
        }

        else
        {
            for(long long i=0;i<sqrt(d);i++)
            {
                long long s = ceil(i+(d/(i+1.0)));
                if(s<=n)
                {
                    cout<<"YES\n";
                    goto read;
                }
            }
        }

        cout<<"NO\n";
    }

    return 0;
}
