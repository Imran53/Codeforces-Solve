#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    read:
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int m=0,t=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='M')
                m++;
        }

        if(3*m!=n)
        {
            cout<<"NO\n";
            goto read;
        }
         m=0,t=0;

        for(int i=0;i<n;i++)
        {
            if(s[i]=='M')
                m++;
            else
                t++;
            if(m>t)
            {
                cout<<"NO\n";
                goto read;
            }
        }

        m=0,t=0;

         for(int i=n-1;i>=0;i--)
        {
            if(s[i]=='M')
                m++;
            else
                t++;
            if(m>t)
            {
                cout<<"NO\n";
                goto read;
            }
        }
        cout<<"YES\n";
    }

    return 0;
}
