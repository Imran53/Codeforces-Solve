#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    read:
    while(t--)
    {
        int n,cnt=0;
        cin>>n;
        string s;
        cin>>s;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='0')
                cnt++;
        }
        if(cnt==0)
        {
            cout<<"DRAW\n";
            goto read;
        }
        if(cnt==1)
        {
            cout<<"BOB\n";
            goto read;
        }
        if(cnt%2==0)
        {
            cout<<"BOB\n";
            goto read;
        }
        if(cnt%2==1)
        {
            cout<<"ALICE\n";
            goto read;
        }
    }
    return 0;
}
