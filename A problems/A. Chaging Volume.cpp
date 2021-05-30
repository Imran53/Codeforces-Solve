#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin>>t;
    while(t--)
    {

       ll a,b,r=0,s;
       cin>>a>>b;
       s=abs(a-b);
       r+=s/5;
       s=s%5;
       r+=s/2;
       s=s%2;
       r+=s;
       cout<<r<<endl;

    }

    return 0;


}
