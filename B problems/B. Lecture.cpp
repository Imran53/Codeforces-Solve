#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    map<string,string>mm;
    while(m--)
    {
        string a,b;
        cin>>a>>b;
        mm[a]=b;
    }
    while(n--)
    {
        string s;
        cin>>s;
        if(mm[s].size()<s.size())
            cout<<mm[s]<<" ";
        else
            cout<<s<<" ";
    }
    return 0;
}
