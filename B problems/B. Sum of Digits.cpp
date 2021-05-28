#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int cnt=0,n=0;
    while(s.size()!=1)
    {
        for(int i=0;i<s.size();i++)
        {
            n+=s[i]-'0';
        }
        s=to_string(n);
        n=0;
        cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}
