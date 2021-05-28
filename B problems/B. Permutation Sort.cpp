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
        vector<int>a(n),b(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            b[i]=a[i];
        }

        sort(b.begin(),b.end());

        if(a==b)
            cout<<0<<endl;
        else if(a[0]==1 or a[n-1]==n)
            cout<<1<<endl;
        else if(a[0]==n and a[n-1]==1)
            cout<<3<<endl;
        else
            cout<<2<<endl;
    }
    return 0;
}
