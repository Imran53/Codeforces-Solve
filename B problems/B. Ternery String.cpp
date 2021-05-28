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
        int ans=10000000;
        int a=-1,b=-1,c=-1;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='1')
                a=i;
            if(s[i]=='2')
                b=i;
            if(s[i]=='3')
                c=i;
            if(a!=-1 and b!=-1 and c!=-1)
                ans=min(ans,max(a,max(b,c))-min(a,min(b,c))+1);
        }
        if(ans==10000000)
            cout<<0<<endl;
        else
            cout<<ans<<endl;
    }
    return 0;
}
