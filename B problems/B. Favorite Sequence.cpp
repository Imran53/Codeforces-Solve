#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        if(n%2==0)
        {
            for(int i=0;i<n/2;i++)
            {
                cout<<a[i]<<" "<<a[n-i-1]<<" ";
            }
            cout<<endl;
        }
        else
        {
            for(int i=0;i<n/2;i++)
            {
                cout<<a[i]<<" "<<a[n-i-1]<<" ";
            }
            cout<<a[n-(n/2+1)]<<endl;
        }
    }

    return 0;
}
