#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k,cnt=0,ans=0;
    cin>>n>>k;
    string s;
    cin>>s;
    char c;
    map<char,long long>m;
    for(long long i=0;i<k;i++)
    {
        cin>>c;
        m[c]++;
    }
    for(long long i=0;i<n;i++)
    {
        if(m[s[i]]>0)
            cnt++;
        else
        {
            ans+=(cnt*(cnt+1)/2);
            cnt=0;
        }
        if(i==n-1)
        {
            ans+=(cnt*(cnt+1)/2);
        }
    }
    cout<<ans<<endl;
    return 0;
}
