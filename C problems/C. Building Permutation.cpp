#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,cnt=0;
    cin>>n;
    vector<long long>v(n);

    for(int i=0;i<n;i++)
        cin>>v[i];

    sort(v.begin(),v.end());

    for(int i=0;i<n;i++)
    {
        cnt+=abs(i+1-v[i]);
    }

    cout<<cnt;
    return 0;


}
