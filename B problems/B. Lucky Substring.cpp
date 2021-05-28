#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int f=0,ss=0;

    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='4')
            f++;
        else if(s[i]=='7')
            ss++;
    }

    if(f==0 and ss==0)
        cout<<-1;
    else if(f>=ss)
        cout<<4;
    else
        cout<<7;

    return 0;
}
