#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,ss=0;
    cin>>a>>b>>c>>d;
    string s;
    cin>>s;

    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='1')
            ss+=a;
        else if(s[i]=='2')
            ss+=b;
        else if(s[i]=='3')
            ss+=c;
        else
            ss+=d;
    }

    cout<<ss<<endl;
    return 0;
}
