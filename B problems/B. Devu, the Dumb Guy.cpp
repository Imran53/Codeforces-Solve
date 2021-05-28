#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,x;
    cin>>n>>x;
    long long a[n];
    for(long long i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    long long sum=0;
    for(long long i=0;i<n;i++)
    {
        if(x>1)
        {
            sum+=a[i]*x;
            x-=1;
        }
        else
        {
            sum+=a[i]*1;
        }
    }
    cout<<sum<<endl;
    return 0;
}
