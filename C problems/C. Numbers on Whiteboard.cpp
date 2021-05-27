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
        cout<<2<<endl;
        cout<<n<<" "<<n-1<<endl;
        for(int i=n-2;i>=1;i--)
            cout<<i+2<<" "<<i<<endl;
    }

    return 0;
}
