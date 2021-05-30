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
        if(n<=30)
            cout<<"NO\n";
        else
        {
            cout<<"YES\n";
            if(n==36 or n==40 or n==44)
                cout<<6<<" "<<10<<" "<<15<<" "<<n-31<<endl;
            else
                cout<<6<<" "<<10<<" "<<14<<" "<<n-30<<endl;
        }
    }

    return 0;
}
