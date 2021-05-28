#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,ans;
    cin>>a;
    while(1)
    {
        ans=0;
        while(a>0)
        {
            ans+=a%10;
            a/=10;
        }
        if(ans<10)
            break;
        a=ans;
    }
    cout<<ans;
    return 0;
}
