#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q,sum=0,s=0,cnt=0,c=0;
    cin>>n>>q;
    int a[n+1],x,y;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
       // sum+=a[i];
    }
    sort(a+1,a+n+1);
    reverse(a+1,a+n+1);
    while(q--)
    {
        cin>>x>>y;
        s=0,sum=0;
        cnt=x-y+1;
        c=cnt;
        while(c>0)
        {
            sum+=a[cnt];
            cnt++;
            c--;
        }
        cout<<sum<<endl;






    }
    return 0;
}
