#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    char c;
    cin>>c;
    string s;
    cin>>s;
    int ok=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]!=c)
        {
            ok=1;
            break;
        }
    }
    if(ok==0)
    {
        cout<<0<<endl;
        return;
    }
    for(int i=n-1;i>=n/2;i--)
    {
        if(s[i]==c)
        {
            cout<<"1\n"<<i+1<<endl;
            return;
        }
    }
    cout<<"2\n"<<n<<" "<<n-1<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}
