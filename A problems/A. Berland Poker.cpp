#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,k;
        cin>>n>>m>>k;
        int a=n/k;
        if(a>=m)
            cout<<m<<endl;
        else
            cout<<a-ceil((m-a)/double(k-1))<<endl;
    }

    return 0;
}
