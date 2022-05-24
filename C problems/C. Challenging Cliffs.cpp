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
        int a[n],mx=0,first=0,last=0;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            if(a[i]>mx)
                mx=a[i];
        }
        sort(a,a+n);
        if(n==2)
        {
            cout<<a[0]<<' '<<a[1]<<endl;
        }
        else
        {
            for(int i=0; i<n-1; i++)
            {
                if(a[i+1]-a[i]<mx)
                {
                    mx=(a[i+1]-a[i]);
                    first=i;
                    last=i+1;
                }
            }
            for(int i=last; i<n; i++)
                cout<<a[i]<<" ";

            for(int i=0; i<=first; i++)
            {
                cout<<a[i]<<" ";
            }

            cout<<endl;
        }


    }

    return 0;
}
