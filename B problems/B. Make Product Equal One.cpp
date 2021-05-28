#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m=0; cin>>n;
    int a[n];
    long long sum=0;
    bool ok=0;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]<0) m++;
        else if(a[i]==0) ok=1;
        sum+=abs(abs(a[i])-1);
    }
    if(m%2==1 and ok==0) cout<<sum+2<<endl;
    else cout<<sum<<endl;
}
