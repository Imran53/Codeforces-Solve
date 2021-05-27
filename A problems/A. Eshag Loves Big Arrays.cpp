
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int n;
       cin>>n;
       int a[n],sum=0,cnt=0;
       for(int i=0;i<n;i++)
       {
           cin>>a[i];
       }
       sort(a,a+n);
       sum=a[0];
       for(int i=0;i<n;i++)
       {
           if(a[i]==sum)
            cnt++;
       }
       cout<<n-cnt<<endl;
    }
    return 0;
}
