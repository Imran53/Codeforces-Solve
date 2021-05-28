#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n],total[n];
    set<int>s;

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    reverse(a,a+n);
    for(int i=0;i<n;i++)
    {
        s.insert(a[i]);
        total[i]=s.size();
    }

    while(m--)
    {
        int l;
        cin>>l;
        l=n-l;
        cout<<total[l]<<endl;

    }

    return 0;


}

