#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int a,t=0,sum=0,c=0;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        sum+=a;
        t=min(sum,8);
        sum-=t;
        k-=t;
        c++;
        if(k<=0)
            break;
    }
    if(k>0)
        cout<<-1;
    else
        cout<<c;
    return 0;
}
