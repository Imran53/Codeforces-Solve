#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,n,c=0;
        cin>>a>>b>>n;
        while(a<=n and b<=n)
        {
            if(a<b)
                a+=b;
            else
                b+=a;
            c++;
        }
        cout<<c<<endl;
    }

    return 0;
}
