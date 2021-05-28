#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s,ss;
    cin>>s>>ss;
    long long zerozero=0,oneone=0,zeroone=0,onezero=0;

    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='0' and ss[i]=='0')
            zerozero++;
        if(s[i]=='1' and ss[i]=='1')
            oneone++;
        if(s[i]=='0' and ss[i]=='1')
            zeroone++;
        if(s[i]=='1' and ss[i]=='0')
            onezero++;
    }

    long long ans=(zerozero*oneone)+(zeroone*onezero)+(zerozero*onezero);

    cout<<ans;

    return 0;
}
