#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long s,x,cnt=0;
    cin>>s>>x;
    while(s>0)
    {
        s/=x;
        cnt++;
    }

    if(cnt!=0)
        cout<<cnt;
    else
        cout<<1;

    return 0;
}
