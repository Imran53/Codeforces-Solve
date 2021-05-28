#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int cnt=0,cnt1=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='.')
            cnt++;

        if(s[i]=='L')
            cnt=0;

        if(s[i]=='R')
        {
            cnt1+=cnt;
            cnt=0;
            while(s[i+1]!='L' and i!=n)
            {
                cnt++;
                i++;
            }
            if(s[i+1]=='L' and cnt%2!=0)
                cnt1++;

            cnt=0;
        }
    }

    cout<<cnt1+cnt;
    return 0;
}
