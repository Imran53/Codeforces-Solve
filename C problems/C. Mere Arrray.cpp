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
        vector<int>a(n),b(n),v;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            b[i]=a[i];
            v.push_back(a[i]);
        }
        sort(b.begin(),b.end());
        int p=*min_element(v.begin(),v.end());
        bool ok=0;

        for(int i=0;i<n;i++)
        {
            if(a[i]!=b[i])
            {
                if(a[i]%p!=0)
                {
                    ok=1;
                    break;
                }
            }
        }
        if(ok==0)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
