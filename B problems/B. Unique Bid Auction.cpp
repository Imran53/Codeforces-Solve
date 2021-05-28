#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    read:
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        map<int,int>m;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            m[a[i]]++;
        }

        for(int i=0;i<n;i++)
        {
            if(m[a[i]]==1)
                v.push_back(a[i]);
        }

        sort(v.begin(),v.end());

        if(v.size()!=0)
        {
            for(int i=0;i<n;i++)
            {
                if(a[i]==v[0])
                {
                    cout<<i+1<<endl;
                    goto read;
                }
            }
        }

        cout<<-1<<endl;

    }

    return 0;
}
