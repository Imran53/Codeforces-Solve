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
        int sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];

        }

        if(sum==0)
            cout<<"NO\n";
        else
        {
            sort(a,a+n);
            cout<<"YES\n";

            if(sum>0)
            {
                for(int i=n-1;i>=0;i--)
                {
                    cout<<a[i]<<" ";
                }
                cout<<endl;
            }

            else
            {
                for(int i=0;i<n;i++)
                {
                    cout<<a[i]<<" ";

                }
                cout<<endl;
            }
        }
    }

    return 0;
}
