#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    read:
    while(t--)
    {
        int n,a=0,b=0,c=0;
        cin>>n;
        if(n<24)
        {
            cout<<"NO\n";
            goto read;
        }
        else
        {
            for(int i=2;i*i<=n;i++)
            {
                if(n%i==0)
                {
                    a=i;
                    b=n/i;
                    break;
                }
            }
            if(a==0 and b==0)
            {
                cout<<"NO\n";
                goto read;
            }
            for(int i=2;i*i<=b;i++)
            {
                if((b%i==0) and (i!=a) and (b/i!=a) and (b/i!=i))
                {
                    c=i;
                    b=b/i;
                    break;
                }
            }
            if(c==0)
            {
                cout<<"NO\n";
                goto read;
            }
            else
            {
                cout<<"YES\n";
                cout<<a<<" "<<c<<" "<<b<<endl;
            }
        }
    }
    return 0;
}
