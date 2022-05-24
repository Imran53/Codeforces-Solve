#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s,ss;
        cin>>s>>ss;
        int cnt=0;
        for(int i=0;i<ss.size();i++)
        {
            if(ss[i]=='a')
                cnt++;
        }
        if(ss=="a")
            cout<<1<<endl;
        else if(cnt!=0)
            cout<<-1<<endl;
        else
            cout<<(long long)pow(2,s.size())<<endl;
    }
    return 0;
}

