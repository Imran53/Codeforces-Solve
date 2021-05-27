#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k;
    cin>>n>>k;
    vector<long long>v(n),vv;
    for(int i=0;i<n;i++)
        cin>>v[i];
    sort(v.begin(),v.end());
    long sum=0,cnt=1,j=0,total=0;

    while(sum+cnt<=k)
    {
        if(cnt==v[j])
        {
            cnt++;
            j++;
        }
        else
        {
            sum+=cnt;
            vv.push_back(cnt);
            cnt++;

        }
    }
    cout<<vv.size()<<endl;
    for(long long i=0;i<vv.size();i++)
        cout<<vv[i]<<" ";
    return 0;
}
