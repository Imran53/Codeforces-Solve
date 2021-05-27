#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
    sort(a,a+n);
    for(int i=0; i<n; i++)
    {
        if(a[i]==a[i+1] and a[i+1]==a[i+2])
        {
            cout<<"NO\n";
            return 0;
        }
    }
    vector<int>v,vv;

    for(int i=0; i<n; i++)
    {
        if(a[i]==a[i+1])
        {
            v.push_back(a[i]);
            i++;
        }

        else
        {
            v.push_back(a[i]);
            //i++;
        }
    }

    cout<<"YES\n";
    cout<<v.size()<<endl;

    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    for(int i=n-1; i>=0; i--)
    {
        if(a[i]==a[i+1])
        {
            vv.push_back(a[i]);
        }
    }

    cout<<vv.size()<<endl;

    for(int i=0; i<vv.size(); i++)
    {
        cout<<vv[i]<<" ";
    }

    return 0;
}
