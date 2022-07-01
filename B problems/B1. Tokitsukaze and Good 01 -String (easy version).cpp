#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        bool ok=0;
        int cnt=0;
        for(int i=0;i<n-1;i+=2)
        {
            if(s[i]==s[i+1])
            {
                continue;
            }
            else
            {
                cnt++;
                ok=1;
            }

        }
        if(ok==0)
            cout<<0<<endl;
        else
            cout<<cnt<<endl;
    }
}

