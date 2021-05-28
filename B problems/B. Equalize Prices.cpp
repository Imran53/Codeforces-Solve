#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);

        int r=a[0]+k;
        if(a[n-1]-r<=k)
            cout<<r<<endl;
        else
            cout<<-1<<endl;
    }

    return 0;

}
