#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long k;
    cin>>k;
    string s;
    cin>>s;
    long long sum=0;
    for(long long i=0;i<s.size();i++)
    {
        sum+=s[i]-'0';
    }
    if(sum>=k)
    {
        cout<<0;
        return 0;
    }
    sort(s.begin(),s.end());
    long long d=k-sum;
    long long i=0,ans=0;
    while(d>0)
    {
        d-=9-(s[i]-'0');
        ans++;
        i++;
    }
    cout<<ans;
    return 0;
}
