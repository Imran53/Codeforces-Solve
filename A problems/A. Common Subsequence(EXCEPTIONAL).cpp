#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int cnt;
        bool result=true;
        vector<int>a(n),b(m),s(1001);

        for(int i=0;i<n;i++)
        {
            cin>>a[i];

            s[a[i]]++;
        }

        for(int i=0;i<m;i++)
        {
            cin>>b[i];

            if(s[b[i]]!=0)
            {
                cnt=b[i];
                result=false;
            }
        }

        if(result)
        {
            cout<<"NO\n";
        }

        else
        {
            cout<<"YES\n";
            cout<<1<<" "<<cnt<<endl;
        }


    }

    return 0;
}
