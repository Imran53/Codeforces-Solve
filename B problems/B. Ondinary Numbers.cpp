#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,c=0,a=1;
        cin>>n;
        bool ok=0;
        while(ok!=1)
        {
            for(int i=1;i<=9;i++)
            {
                if(a*i<=n)
                    c++;
                else
                {
                    ok=1;
                    break;
                }
            }
            a=10*a+1;
        }
        cout<<c<<endl;
    }


}
