#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];

    sort(a,a+n);

    for(int i=n-2;i>=0;i--)
    {
        if(a[n-1]%a[i]!=0)
        {
            cout<<a[n-1]<<" "<<a[i]<<endl;
            return 0;
        }

        else
        {
            if(a[i]==a[i+1])
            {
                cout<<a[n-1]<<" "<<a[i]<<endl;
                return 0;
            }
        }
    }

    exit(0);
}
