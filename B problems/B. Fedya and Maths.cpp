#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    if(s.size()==1)
    {
        int ss=s[0]-0;
        if(ss%4==0)
            cout<<4;
        else
            cout<<0;
    }

    else
    {
        int ss=s[s.size()-2]-0;
        ss*=10;
        int sss=s[s.size()-1]-0;
        int t=ss+sss;
        if(t%4==0)
            cout<<4;
        else
            cout<<0;
    }

    return 0;
}
