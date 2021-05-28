#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,c;
    cin>>n>>t>>c;
    int cc=0,c1=0;

    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;

        if(a<=t)
            cc++;
        else
            cc=0;
        if(cc>=c)
            c1++;
    }

    cout<<c1;
    return 0;
}
