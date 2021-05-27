#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int cc=(a+b+c)/3;
        cc=min(cc,a);
        cc=min(cc,b);
        cout<<cc<<endl;
    }

    return 0;
}
