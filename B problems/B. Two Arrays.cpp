#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,cnt=0;
        double t;
        cin>>n>>t;

        for(int i=0;i<n;i++)
        {
            cin>>a;
            if(a>t/2)
                cout<<1<<" ";
            else if(a<t/2)
                cout<<0<<" ";
            else
            {
                cnt++;
                cout<<cnt%2<<" ";
            }
        }
        cout<<endl;

    }

    return 0;
}
