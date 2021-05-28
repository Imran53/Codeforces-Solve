#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<pair<string,string> >v;
    int i;
    while(n--)
    {
        string a,b;
        cin>>a>>b;

        for(i=0; i<v.size(); i++)
        {
            if(v[i].second==a)
            {
                v[i].second=b;
                break;
            }
        }

        if(i==v.size())
        {
            v.push_back(make_pair(a,b));
        }

    }
    cout<<v.size()<<endl;
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    return 0;
}
