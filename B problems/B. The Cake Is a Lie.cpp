
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,k,col=0,row=0,s=0;
        cin>>a>>b>>k;
        s=(b-1)+(a-1)*b;
        if(s==k)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}
