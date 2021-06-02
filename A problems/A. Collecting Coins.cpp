#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,n;
        cin>>a>>b>>c>>n;

        int total=a+b+c+n;
        if(total%3!=0)
        {
            cout<<"NO\n";
        }
        else
        {
            int each=total/3;
            int mx=max(a,max(b,c));

            if(mx<=each)
                cout<<"YES\n";
            else
                cout<<"NO\n";
        }
    }

    exit(0);
}
