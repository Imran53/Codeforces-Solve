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
        int s=sqrt(n);
        int d=n/s;
        if(s*d==n)
            cout<<s+d-2<<endl;
        else
            cout<<s+d-1<<endl;
    }

    return 0;
}
