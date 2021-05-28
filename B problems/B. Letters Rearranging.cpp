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
        sort(s.begin(),s.end());
        int cnt=1;

        for(int i=0;i<s.size()-1;i++)
        {
            if(s[i]==s[i+1])
            {
                cnt++;
            }

        }

        if(cnt==s.size())
            cout<<-1<<endl;
        else
            cout<<s<<endl;
    }

    return 0;


}
