#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>e,o;

    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;

        if(a%2==0)
            e.push_back(a);
        else
            o.push_back(a);
    }

    sort(e.begin(),e.end());
    sort(o.begin(),o.end());

    int sum=0;

    if(e.size()>o.size())
    {
        int r=e.size()-o.size()-1;

        for(int i=0;i<r;i++)
        {
            sum+=e[i];
        }

        cout<<sum<<endl;
    }

    else
    {
        int r=o.size()-e.size()-1;

        for(int i=0;i<r;i++)
        {
            sum+=o[i];
        }

        cout<<sum<<endl;
    }

    return 0;
}
