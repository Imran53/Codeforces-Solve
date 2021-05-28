#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        s.push_back(0);
        vector<int>v;
        int cnt=0,ans=0;

        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='1')
                cnt++;
            else
            {
                if(cnt>0)
                {
                    v.push_back(cnt);
                    cnt=0;
                }
            }
        }
        sort(v.begin(),v.end(),greater<int>());

        for(int i=0;i<v.size();i+=2)
        {
            ans+=v[i];
        }

        cout<<ans<<endl;
    }

    return 0;
}

