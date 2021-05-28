/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,mx=0;
    cin>>n;
    int a[n];
    map<int,int>m;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        m[a[i]]++;
        mx=max(m[a[i]],mx);

    }

    cout<<n-mx;
    return 0;
}
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a;
    cin>>n;
    vector<int>v(1001);

    for(int i=0;i<n;i++)
    {
        cin>>a;
        v[a]++;
    }
    int cnt=0;
    cnt=*max_element(v.begin(),v.end());
    cout<<n-cnt;
    return 0;
}
