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
        vector<int>v(n);

        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }

        if(k==0)
        {
            cout<<n<<endl;
            continue;
        }

        if(n==1 and v[0]==0)
        {
            cout<<k+1<<endl;
            continue;
        }

        else if(n==1 and v[0]!=0)
        {
            if(v[0]==1)
            {
                cout<<1<<endl;
                continue;
            }

            else
            {
                cout<<2<<endl;
                continue;
            }

        }

        sort(v.begin(),v.end());
        int c=-1;

        for(int i=1; i<n; i++)
        {
            if(v[i]-v[i-1]>1)
            {
                c=v[i-1]+1;
                break;
            }
        }

        if(v[0]!=0)
            c=0;
        if(c==-1)
        {
            cout<<n+k<<endl;
            continue;
        }

        else
        {
            int a=(c+v[n-1])/2+(c+v[n-1])%2;

            int check=0;

            for(int i=0; i<n; i++)
            {
                if(v[i]==a)
                {
                    check=1;
                    break;
                }
            }

            if(check==1)
            {
                cout<<n<<endl;
                continue;
            }

            else
            {
                cout<<n+1<<endl;
                continue;
            }
        }
    }

    return 0;
}
