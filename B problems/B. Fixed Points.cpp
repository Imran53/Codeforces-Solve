#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    int a[n],cnt=0,ok=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(i==a[i])
            cnt++;
        else
            ok=1;
    }
    for(int i=0;i<n;i++)
    {
        if(i!=a[i] and a[a[i]]==i)
            {
                cout<<cnt+2;
                return 0;
            }
    }
    if(ok==1)
        cout<<cnt+1;
    else
        cout<<cnt<<endl;
    return 0;
}
