#include<bits/stdc++.h>
using namespace std;
int main()
{
    int e,o;
    cin>>e>>o;
    if(e==0 and o==0)
        cout<<"NO\n";
    else
    {
        if(e==o or e+1==o or e-1==o)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
