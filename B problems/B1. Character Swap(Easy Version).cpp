#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    read:
    while(t--)
    {
        int n;
        cin>>n;
        string s,ss;
        cin>>s>>ss;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            if(s[i]!=ss[i])
                v.push_back(i);
        }
        if(v.size()==2)
        {
            if(s[v[0]]==s[v[1]] and ss[v[0]]==ss[v[1]] )
            {
                cout<<"Yes\n";
                goto read;
            }
        }
        cout<<"No\n";

    }
    return 0;
}
