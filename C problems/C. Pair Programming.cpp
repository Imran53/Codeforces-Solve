#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int k,n,m;
        cin>>k>>n>>m;
        int a[n],b[m];

        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<m;i++)
            cin>>b[i];
        int aa=0,bb=0;
        vector<int>v;

        while(aa<n or bb<m)
        {
            if(aa<n and bb<m)
            {
                if(a[aa]<b[bb])
                {
                    v.push_back(a[aa]);
                    aa++;
                }
                else{
                    v.push_back(b[bb]);
                    bb++;
                }
            }
            else if(aa<n)
            {
                v.push_back(a[aa]);
                aa++;
            }
            else if(bb<m)
            {
                v.push_back(b[bb]);
                bb++;
            }
        }
        bool ok=0;
        for(int i=0;i<v.size();i++)
        {
           if(v[i]==0)
                k++;
           else
           {
               if(v[i]>k)
               {
                   ok=1;
                   break;
               }
           }
        }
        if(ok==1)
        {
            cout<<-1<<endl;
        }
        else
        {
            for(int i=0;i<v.size();i++)
            {
                cout<<v[i]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
