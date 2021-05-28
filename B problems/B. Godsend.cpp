#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    long long a[n],sum=0,o=0,e=0;

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];

        if(a[i]%2==1)
            o++;
        else
            e++;
    }

    if(sum%2==1)
    cout<<"First";

    else
    {
      if(o>=1)
            cout<<"First";
      else
        cout<<"Second";
    }

    return 0;
}
