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
        int a[n],maxx=1001,sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);

        for(int i=n-1;i>0;i--)
        {
           sum=a[i]-a[i-1];
            if(sum<maxx)
            {
                maxx=min(sum,maxx);
            }
        }

        cout<<maxx<<endl;
    }
    return 0;
}
