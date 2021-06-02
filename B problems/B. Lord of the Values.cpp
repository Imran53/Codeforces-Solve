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
        int a[n+1];
        for(int i=1; i<=n; i++)
            cin>>a[i];
        cout<<3*n<<endl;
        for(int i=1; i<=n; i+=2)
        {
            cout<<1<<" "<<i<<" "<<i+1<<endl;
            cout<<2<<" "<<i<<" "<<i+1<<endl;
            cout<<1<<" "<<i<<" "<<i+1<<endl;
            cout<<2<<" "<<i<<" "<<i+1<<endl;
            cout<<1<<" "<<i<<" "<<i+1<<endl;
            cout<<2<<" "<<i<<" "<<i+1<<endl;
        }
    }
    return 0;
}
