#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],o=0,e=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]%2==0)
            e++;
        else
            o++;
    }

    if(e!=0 and o!=0)
        sort(a,a+n);
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";

    return 0;
}
