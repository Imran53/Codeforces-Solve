#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,k,sum=0,cnt=0;
    cin>>n>>m;
    vector<pair<int,int> >p;
    vector<int>ans;

    for(int i=0;i<n;i++)
    {
        cin>>k;
        p.push_back(make_pair(k,i+1));
    }

    sort(p.begin(),p.end());

    for(int i=0;i<n;i++)
    {
        sum+=p[i].first;

        if(sum<=m)
        {
            //sum+=p[i].first;
            ans.push_back(p[i].second);
        }
        else
            break;

    }
    cout<<ans.size()<<endl;
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }

    return 0;
}
