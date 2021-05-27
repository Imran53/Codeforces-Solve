#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m;
    cin>>n>>m;
    long long a[n],s1=0,s2=0,cnt=0;

    for(int i=0;i<n;i++)
    {
        int aa,b;
        cin>>aa>>b;
        a[i]=aa-b;
        s1+=aa;
        s2+=b;
    }

    if(s2>m)
    {
        cout<<-1<<endl;
        return 0;
    }

    long long t=s1-m;

    sort(a,a+n,greater<int>());

    for(int i=0;i<n;i++)
    {
        if(t>0)
        {
            cnt++;
            t-=a[i];
        }
    }

    cout<<cnt;
    return 0;
}
