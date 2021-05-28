#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    sort(a,a+n);
    int m;
    cin>>m;
    int b;
    for(int i=0;i<m;i++)
    {
        cin>>b;
        int r=upper_bound(a,a+n,b)-a;
        cout<<r<<endl;
    }

    return 0;
}
