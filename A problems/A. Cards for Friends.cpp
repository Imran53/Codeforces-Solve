#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,n,total=1;
        cin>>a>>b>>n;
        while(a%2==0)
        {
            a/=2;
            total*=2;
        }
        while(b%2==0)
        {
            b/=2;
            total*=2;
        }

       if(total>=n)
        cout<<"YES\n";
       else
        cout<<"NO\n";

    }
    return 0;
}
