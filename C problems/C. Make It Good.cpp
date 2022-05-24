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
            int ans,i;
        for(ans=n-1;ans>=0;ans--)
        {
            if(a[ans]>a[ans-1])
                break;
        }
        for(i=ans;i>=0;i--)
        {
            if(a[i]<a[i-1])
                break;
        }
        if(i==-1)
            i=0;

        cout<<i<<endl;

    }


    return 0;
}
