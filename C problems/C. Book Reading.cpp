#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,m,sum=0;
        cin>>n>>m;
        long long k=m;
        long long d=n/m,i=1;
        while(d!=0)
        {
           sum+=k%10;
           i++;
           k=m*i;
           d--;
        }

        cout<<sum<<endl;
    }
}
