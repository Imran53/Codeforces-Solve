#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    cin>>a[0];

    for(int i=1; i<n; i++)
    {
        cin>>a[i];
        a[i]+=a[i-1];
    }

    int t;
    cin>>t;
    while(t--)
    {
        int p;
        cin>>p;
        int low=0,high=n-1,mid=0;
        while(low<high)
        {
            mid=(low+high)/2;
            if(a[mid]>=p)
                high=mid;
            else
                low=mid+1;
        }
        cout<<low+1<<endl;
    }

    return 0;
}
