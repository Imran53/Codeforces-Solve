#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x0,y0;
    cin>>n>>x0>>y0;
    set<double>s;
    bool ok=false;
    while(n--)
    {
        int x,y;
        cin>>x>>y;
        if(x0==x)
            ok=true;
        else
            s.insert(((y-y0)*double(1.0))/((x-x0)*double(1.0)));
    }
    cout<<ok+s.size();
    return 0;
}
