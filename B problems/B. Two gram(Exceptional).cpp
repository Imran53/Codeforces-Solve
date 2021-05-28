#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    map<string,int>m;
    map<string,int>::iterator it;
    int mx=1;

    for(int i=0;i<n-1;i++)
    {
        m[s.substr(i,2)]++;
        mx=max(mx,m[s.substr(i,2)]);
    }

    for(it=m.begin();it!=m.end();it++)
    {
        if(it->second==mx)
        {
            cout<<it->first<<endl;
            break;
        }
    }
    return 0;
}

