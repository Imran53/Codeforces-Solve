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
        if(s[0]=='?')
        {
            if(s[1]=='a')
                s[0]='b';
            else
                s[0]='a';
        }
        for(int i=1;i<s.size()-1;i++)
        {
            if(s[i]=='?')
            {
                if(s[i+1]!='a' and s[i-1]!='a')
                    s[i]='a';
                else if(s[i+1]!='b' and s[i-1]!='b')
                    s[i]='b';
                else
                    s[i]='c';
            }
        }

        if(s[s.size()-1]=='?')
        {
            if(s[s.size()-2]!='a')
                s[s.size()-1]='a';
                else
                s[s.size()-1]='b';
        }

        bool t=0;
        for(int i=0;i<s.size()-1;i++)
        {
            if(s[i]==s[i+1])
            {
                cout<<-1<<endl;
                t=1;
                break;
            }
        }
        if(t==0)
            cout<<s<<endl;
    }
    return 0;
}
