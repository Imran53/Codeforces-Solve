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
    int ans=0;
    for(int i=0;i<s.size()-1;i++)
    {
        if(s[i]-'0' + s[i+1]-'0'>=10)
            ans=i;
    }
    for(int i=0;i<s.size();i++)
    {
        if(i==ans)
        {
            cout<<s[i]-'0' + s[i+1]-'0';
            i++;
        }
        else
            cout<<s[i];
    }
    cout<<endl;

}
return 0;
}
