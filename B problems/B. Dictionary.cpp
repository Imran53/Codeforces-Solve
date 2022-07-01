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
        int a,b;
        a=s[0]-'a';
        b=s[1]-'a';
        if(a>b)
            cout<<25*a+b+1<<endl;
        else
            cout<<25*a+b<<endl;
    }

    return 0;
}
