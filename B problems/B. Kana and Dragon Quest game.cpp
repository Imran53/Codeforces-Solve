#include<bits/stdc++.h>
using namespace std;
int main()
{
    //1337B
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;

            while(b!=0 and a>20)
            {
                a=(a/2)+10;
                b--;
            }

            while(c!=0)
            {
                a=a-10;
                c--;
            }


        if(a<=0)
            cout<<"YES\n";

        else
            cout<<"NO\n";
    }

    return 0;
}
