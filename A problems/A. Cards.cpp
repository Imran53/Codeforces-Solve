#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int z=0,o=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='z')
            z++;
        else if(s[i]=='n')
            o++;
    }

    for(int i=0;i<o;i++)
    {
        cout<<1<<" ";
    }

    for(int i=0;i<z;i++)
    {
        cout<<0<<" ";
    }
    return 0;

}
