#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    string ss=s;
    int cnt=1;
    reverse(ss.begin(),ss.end());

    if(s==ss)
    {
        for(int i=0; i<s.size()-1; i++)
        {
            if(s[i]==s[i+1])
            {
                cnt++;
            }
            else
            {
                cout<<s.size()-1<<endl;
                return 0;
            }
        }
    }
    else
    {
        cout<<s.size()<<endl;
        return 0;
    }

    if(cnt==s.size())
        cout<<0<<endl;
    return 0;
}



