#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int fb=0,tb=0,ans=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
                fb++;
            else if(s[i]=='[')
                tb++;
            else if(s[i]==')' and fb>0)
            {
                ans++;
                fb--;
            }
            else if(s[i]==']' and tb>0)
            {
                ans++;
                tb--;
            }
        }

        cout<<ans<<endl;
    }

    return 0;
}
