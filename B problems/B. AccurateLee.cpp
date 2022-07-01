#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        string z="",z1="",o="";

        for(int i=s.size()-1;i>=0;i--)
        {
            if(s[i]=='1')
                o+="1";
            else
                break;
        }
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='0')
                z+="0";
            else
                break;
        }
        if(o.size()+z.size()<s.size())
            z1+="0";
        cout<<z<<z1<<o<<endl;

    }
    return 0;
}
