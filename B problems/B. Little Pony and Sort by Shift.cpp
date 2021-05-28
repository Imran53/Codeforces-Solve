#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt=0,index=0;
    cin>>n;
    vector<int>v(n+1);

    for(int i=0;i<n;i++)
    {
        cin>>v[i];

    }
    v[n]=v[0];

    for(int i=0;i<n;i++)
    {
        if(v[i]>v[i+1])
        {
            cnt++;
            index=i+1;
        }
    }
    if(cnt==0)
        cout<<0<<endl;
    else if(cnt>1)
        cout<<-1<<endl;
    else
        cout<<n-index<<endl;
    return 0;

}
