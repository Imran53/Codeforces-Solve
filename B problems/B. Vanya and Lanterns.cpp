#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,ans=0;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    double o=max(a[0],k-a[n-1]);

    for(int i=0;i<n-1;i++)
    {
       o=max(o,((a[i+1]-a[i])/2.0));
    }

    printf("%.10lf",o);
    return 0;
}
