#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        long long n,k,r=0,d=0;
        cin>>n>>k;
        d=(k-1)/(n-1);
        r=(k-1)%(n-1);
        cout<<n*d+1+r<<endl;

    }

    return 0;
}
