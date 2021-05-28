#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n,cnt=0,cnt1=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string ss;
        cin>>ss;

        if(s==ss)
        {
            cout<<"YES\n";
            return 0;
        }
        if(s[0]==ss[1])
            cnt++;
        if(s[1]==ss[0])
            cnt1++;
    }

    if(cnt>0 and cnt1>0)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}
