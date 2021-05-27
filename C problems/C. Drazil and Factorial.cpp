#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s,r="";
    cin>>s;
    map<char,string>m;
    m['2']="2";
    m['3']="3";
    m['4']="223";
    m['5']="5";
    m['6']="35";
    m['7']="7";
    m['8']="7222";
    m['9']="7332";
    for(int i=0;i<n;i++)
    {
        if(s[i]=='0' or s[i]=='1')
            continue;
        r+=m[s[i]];
    }
    sort(r.begin(),r.end());
    reverse(r.begin(),r.end());
    cout<<r<<endl;
    return 0;


}
