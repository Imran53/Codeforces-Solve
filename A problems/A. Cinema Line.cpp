#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a;
    int c25=0,c50=0;
    bool ok=1;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        if(a==25)
            c25++;
        else if(a==50)
        {
            if(c25>0)
            {
                c25--;
                c50++;
            }
            else
                ok=0;
        }

        else if(a==100)
        {
            if(c25>0 and c50>0)
            {
                c25--;
                c50--;
            }
            else if(c25>=3)
                c25-=3;
            else
                ok=0;
        }
    }

    if(ok==0)
        cout<<"NO\n";
    else
        cout<<"YES\n";

    return 0;

}
