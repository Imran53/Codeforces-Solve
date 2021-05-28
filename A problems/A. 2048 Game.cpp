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
        int s=0;
        for(int i=0; i<n; i++)
        {
            int a;
            cin>>a;
            if(a<=2048)
                s+=a;

        }
        if(s>=2048)
            cout<<"Yes\n";
        else
            cout<<"No\n";

    }

    return 0;
}
