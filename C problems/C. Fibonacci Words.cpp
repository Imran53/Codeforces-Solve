#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    for(int i=2;i<s.size();i++)
    {
        if(((s[i-1]-'A')+(s[i-2]-'A'))%26!=s[i]-'A')
        {
            cout<<"NO";
            return 0;
        }
    }

    cout<<"YES";
    return 0;
}
