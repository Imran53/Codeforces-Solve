#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    if(n<3)
        cout<<"No";
    else
    {
        cout<<"Yes\n";
        cout<<(n+1)/2<<" ";

        for(int i=1;i<=n;i++)
        {
            if(i%2==1)
                cout<<i<<" ";
        }
        cout<<endl<<n/2<<" ";
        for(int i=1;i<=n;i++)
        {
            if(i%2==0)
                cout<<i<<" ";
        }
    }

    return 0;
}
