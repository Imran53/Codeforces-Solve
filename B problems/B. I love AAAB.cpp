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
        int a=0,b=0,ok=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='A')
                a++;
            else
                b++;
            if(b>a)
                ok=1;
        }
        if(s[s.size()-1]!='B')
            ok=1;
        if(ok==1)
            cout<<"NO\n";
        else
            cout<<"YES\n";
    }
    return 0;
}
