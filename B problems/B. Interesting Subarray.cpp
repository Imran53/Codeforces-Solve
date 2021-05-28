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
        for(int i=1;i<=n;i++)
            cin>>a[i];
      //  sort(a+1,a+n+1);
        bool ok=0;
        for(int i=1;i<=n-1;i++)
        {
            if(abs(a[i]-a[i+1])>1)
            {
                cout<<"YES\n"<<i<<" "<<i+1<<endl;
                ok=1;
                break;
            }
        }

        if(ok==0)
            cout<<"NO\n";
    }

    return 0;
}
