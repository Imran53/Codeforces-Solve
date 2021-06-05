#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int a,b,c,d;
    cin>>a>>b>>c>>d;

    if(a+b==c+d or a+c==b+d or a+d==b+c or a==b+c+d or b==a+c+d or c==a+b+d or d==a+b+c)
        cout<<"YES\n";

    else
        cout<<"NO\n";

    return 0;



}

