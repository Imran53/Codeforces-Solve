#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long s=0;
    for(int i=1;i<=n;i*=10)
    {
        s+=n-(i-1);
    }
    cout<<s<<endl;
    return 0;
}
