#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    read:
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        vector<int>a(n),b(n);

        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            cin>>b[i];
        }

        reverse(b.begin(),b.end());

        int sum=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]+b[i]<=x)
            {
                continue;
            }
            else
            {
                cout<<"No\n";
                goto read;
            }
        }

        cout<<"Yes\n";


    }

    return 0;
}
