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
        vector<int>a(n),v;

        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }

        for(int i=0; i<n; i++)
        {
            if(i+1<n and a[i]==a[i+1])
            {
                i++;
            }
            else if(i+2<n and a[i]==a[i+2])
            {
                i+=2;
            }
            else
                continue;
            v.push_back(a[i]);
            v.push_back(a[i]);
        }

        if(v.size()==0)
        {
            cout<<1<<endl;
            cout<<0<<endl;
        }

        else
        {

            cout<<v.size()<<endl;
            for(int i=0; i<v.size(); i++)
            {
                cout<<v[i]<<" ";
            }
            cout<<endl;
        }
    }


}
