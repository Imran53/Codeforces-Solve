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
        int a[n],pc=0,mc=0;
        bool ok=0;
        for(int i=0;i<n;i++)
            cin>>a[i];


        for(int i=0;i<n;i++)
        {
            int b;
            cin>>b;
             if(a[i]>b)
            {
                if(mc==0)
                {
                    ok=1;
                }

            }
            if(a[i]<b)
            {
                if(pc==0)
                {
                    ok=1;

                }
            }

            if(a[i]>0)
                pc++;
            else if(a[i]<0)
                mc++;
        }


        if(ok==1)
        {
            cout<<"NO\n";
        }
        else
        {
            cout<<"YES\n";
        }

    }

    return 0;
}
