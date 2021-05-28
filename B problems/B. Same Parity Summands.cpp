#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        if(n%2==1)
        {
            if(n<k or k%2==0)
                cout<<"NO\n";
            else
            {
                cout<<"YES\n";
                for(int i=0;i<k-1;i++)
                {
                    cout<<1<<" ";
                }
                cout<<n-(k-1)<<endl;
            }
        }
        else
        {
            if(n<k)
                cout<<"NO\n";
            else
            {
                if(k%2==0)
                {
                    cout<<"YES\n";
                    for(int i=0;i<k-1;i++)
                    {
                        cout<<1<<" ";
                    }
                    cout<<n-(k-1)<<endl;
                }

                else
                {
                    if(k*2>n)
                        cout<<"NO\n";
                    else
                    {
                        cout<<"YES\n";
                        for(int i=0;i<k-1;i++)
                        {
                            cout<<2<<" ";
                        }
                        cout<<n-2*(k-1)<<endl;
                    }
                }
            }
        }
    }

    return 0;
}

