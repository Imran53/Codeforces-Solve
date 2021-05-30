#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    string w="hello";
    int a=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==w[a])
            a++;
    }

    if(a==5)
        cout<<"YES\n";
    else
        cout<<"NO\n";

    exit(0);
}
