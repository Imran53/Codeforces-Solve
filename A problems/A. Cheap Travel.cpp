#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    if(m*a<=b)
    {
        cout<<n*a;
    }
    else
    {
        int ans= (n/m)*b;
        ans+=min(b,(n%m)*a);
        cout<<ans;
    }

    return 0;
}
