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
        int nn=n%11;
        if(nn==0 or nn<=n/111)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
