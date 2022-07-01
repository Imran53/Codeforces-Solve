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
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];

        int one=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]==1)
                one++;
            else
                break;
        }
        if(one==n)
        {
            if(one%2==1)
                cout<<"First\n";
            else
                cout<<"Second\n";
        }
        else
        {
            if(one%2==1)
                cout<<"Second\n";
            else
                cout<<"First\n";
        }
    }
    return 0;
}
