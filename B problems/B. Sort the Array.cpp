#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n),a;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];

    }
    a=v;
    sort(v.begin(),v.end());
    int l=0,r=0;

    for(int i=0;i<n;i++)
    {
        if(v[i]!=a[i])
        {
           l=i;
           break;
        }
    }

    for(int i=n-1;i>=0;i--)
    {
        if(v[i]!=a[i])
        {
            r=i;
            break;
        }
    }
    reverse(a.begin()+l,a.begin()+r+1);

    if(a==v)
    cout<<"yes\n"<<l+1<<' '<<r+1<<endl;
    else
        cout<<"no\n";
    return 0;

}
