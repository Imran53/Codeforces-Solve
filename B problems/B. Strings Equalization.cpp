#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){

        string s,ss;
        cin>>s>>ss;
        int cnt=0;

        for(int i=0;i<s.size();i++)
        {
            for(int j=0;j<ss.size();j++)
            {
                if(s[i]==ss[j])
                    cnt++;
            }
        }

        if(cnt>0)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }

    return 0;
}
