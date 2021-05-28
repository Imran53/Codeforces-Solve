#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,e=0,o=0;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;

            if(a%2==0)
                e++;
            else
                o++;
        }

        if(e==n)
        {
            cout<<"NO\n";
        }
        else if(o==n)
        {
           if(o%2!=0)
           {
               cout<<"YES\n";
           }
           else{
                cout<<"NO\n";
           }
        }

        else
        {
            cout<<"YES\n";
        }
    }

    return 0;
}
