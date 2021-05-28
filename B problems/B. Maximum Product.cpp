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
        int a[n],mins=0,add=0;
        long long m=1;

        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]<0)
                mins++;
            else
                add++;

        }

        sort(a,a+n,greater<int>());

     /*   if(add%2==0 and mins%2==0)
        {
            for(int i=0;i<2;i++)
            {
                m*=a[i];

            }

            for(int i=n-1;i>2;i--)
            {
                m*=a[i];

            }

            cout<<m;
        }  */


        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }



    }

    return 0;
}
