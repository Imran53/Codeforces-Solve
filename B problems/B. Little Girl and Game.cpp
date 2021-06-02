#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int a[10001],cnt=0;
    for(int i=0;i<s.size();i++)
    {
        a[s[i]]++;
    }
    for(int i=0;i<s.size();i++)
    {
        if(a[s[i]]%2==1)
            cnt++;
    }
    if(cnt==0 or cnt%2==1)
        cout<<"First\n";
    else
        cout<<"Second\n";
    return 0;
}
