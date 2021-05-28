#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int p=s.size();
    string sss;
    int ss=ceil(n/2);
    while(ss--)
    {
        sss=s[ss];
        s.erase(s[ss]);
        p--;
        ss=ceil(p)/2;

    }

   // sss=s[ss];
    cout<<sss;
}
