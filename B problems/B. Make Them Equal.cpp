#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }

    sort(v.begin(),v.end());
    vector<int>vv;
    vv.push_back(v[0]);

    for(int i=1; i<n; i++)
    {
        if(v[i]!=v[i-1])
            vv.push_back(v[i]);
    }

    if(vv.size()==1)
    {
        cout<<0<<endl;
    }

    else if(vv.size()==2)
    {
        if((vv[1]-vv[0])%2==0)
            cout<<(vv[1]-vv[0])/2<<endl;
        else
            cout<<vv[1]-vv[0]<<endl;
    }
    else if(vv.size()==3)
    {
        if((vv[1]-vv[0])==(vv[2]-vv[1]))
            cout<<vv[1]-vv[0]<<endl;
        else
            cout<<-1<<endl;
    }
    else
        cout<<-1<<endl;

    return 0;



}
