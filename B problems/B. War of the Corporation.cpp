#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,ss;
    cin>>s>>ss;
    int a=s.size(),b=ss.size(),ans=0;

    for(int i=0;i<a-b+1;i++)
    {
        if(s.substr(i,b)==ss)
        {
            ans++;
            i+=b-1;
        }
    }

    cout<<ans;
    return 0;
}
