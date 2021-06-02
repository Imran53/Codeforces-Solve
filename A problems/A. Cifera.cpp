#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long k,l,n=1;
    cin>>k>>l;
    for(int i=0;n<=l;i++)
    {
        n=n*k;
        if(n==l)
        {
            cout<<"YES\n"<<i;
            return 0;
        }
    }
    cout<<"NO";
    return 0;
}
