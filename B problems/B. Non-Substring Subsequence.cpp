#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,q;
        cin>>n>>q;
        string s;
        cin>>s;
        while(q--)
        {
            int l,r;
            cin>>l>>r;
            int ok=0;
            for(int i=r;i<n;i++)
            {
                if(s[i]==s[r-1])
                    ok=1;
            }

            for(int i=0;i<l-1;i++)
            {
                if(s[i]==s[l-1])
                    ok=1;
            }

            if(ok==1)
                cout<<"YES\n";
            else
                cout<<"NO\n";
        }
    }
    return 0;
}
