#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,mx=0,mn=99,mxindex,mnindex;
    cin>>n;

    int a[n];

    for(int i=0;i<n;i++)
    {
        cin>>a[i];

        if(a[i]>mx)
        {
            mx=a[i];
            mxindex=i;
        }

        if(a[i]<=mn)
        {
            mn=a[i];
            mnindex=i;
        }
    }

    if(mxindex>mnindex)
    {
        cout<<(abs(0-mxindex)+abs((n-1)-mnindex))-1<<endl;
    }

    else{

        cout<<(abs(0-mxindex)+abs((n-1)-mnindex))<<endl;
    }

    return 0;
}
