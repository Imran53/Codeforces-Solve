#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int l=s.size(),cnt=0;
    for(int i=0;i<l-1;i++)
    {
        if(s[i]==s[i+1])
        {
            s.erase(i,2);
            i-=2;
            l-=2;
            cnt++;
        }
    }

    if(cnt%2==1)
        cout<<"Yes\n";
    else
        cout<<"No\n";
    return 0;
}
