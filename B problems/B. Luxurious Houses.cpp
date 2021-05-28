#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],b[n],mx=0;

    for(int i=0;i<n;i++)
    {
        cin>>a[i];

    }

    for(int i=n-1;i>=0;i--)
    {
        if(mx<a[i])
        {
            b[i]=0;
            mx=a[i];
        }
        else
        {
            b[i]=mx+1-a[i];
        }
    }

    for(int i=0;i<n;i++)
    {
        if(i==n-1)
            cout<<b[i]<<endl;
        else
            cout<<b[i]<<" ";
    }

    return 0;
}
