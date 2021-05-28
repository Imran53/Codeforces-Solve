#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,ss,sss;
    cin>>s>>ss>>sss;
    map<char,int>m;

    for(int i=0;i<26;i++)
    {
        m[s[i]]=i;
    }

    for(int i=0;i<sss.size();i++)
    {
        char ch=tolower(sss[i]);

        if(sss[i]>='0' and sss[i]<='9')
          cout<<sss[i];

        else if(sss[i]>='A' and sss[i]<='Z')
            cout<<(char)toupper(ss[m[ch]]);

        else
            cout<<(char)ss[m[ch]];

    }

    return 0;
}
