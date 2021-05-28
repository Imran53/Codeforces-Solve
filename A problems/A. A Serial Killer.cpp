#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,ss;
    cin>>s>>ss;
    cout<<s<<' '<<ss<<endl;
    int n;
    cin>>n;
    string a,b;
    while(n--)
    {
        cin>>a>>b;
        if(a==s)
        {
            cout<<ss<<" "<<b<<endl;
            s=ss;
            ss=b;
        }
        else
        {
            cout<<s<<" "<<b<<endl;
            ss=b;
        }
    }
    return 0;
}
