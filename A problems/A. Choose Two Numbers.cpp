#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];

    sort(v.begin(),v.end());

    int m;
    cin>>m;
    vector<int>vv(m);
    for(int i=0;i<m;i++)
        cin>>vv[i];
    sort(vv.begin(),vv.end());

    cout<<v[n-1]<<" "<<vv[m-1];

    return 0;


}
