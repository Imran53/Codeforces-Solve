#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long l,r;
    cin>>l>>r;
    long long c=l+1;
    cout<<"YES\n";

        for(long long i=l;i<=r;i++)
        {
            cout<<i<<" "<<c<<endl;
            i++;
            c+=2;
        }

    return 0;
}
