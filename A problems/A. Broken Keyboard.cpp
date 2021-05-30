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
        set<char>c;
        set<char>::iterator it;

        for(int i=0;i<s.size();i++)
        {
            if(s[i]==s[i+1])
                i++;
            else
                c.insert(s[i]);
        }

        for(it=c.begin();it!=c.end();it++)
        {
            cout<<*it;

        }
        cout<<endl;
    }

    return 0;
}
