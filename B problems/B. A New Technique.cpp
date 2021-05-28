#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,r,re;
        cin>>l>>r;
        re=l%(r+1);
        double reee=((r+1)/2.0);

       if(re>=reee)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }

    return 0;
}
