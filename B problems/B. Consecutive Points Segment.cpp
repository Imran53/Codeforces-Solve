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
        int two=0,three=0,others=0,one=0;
        for(int i=1;i<n;i++)
        {
            if(a[i]-a[i-1]==2)
                two++;
            else if(a[i]-a[i-1]==3)
                three++;
            else if(a[i]-a[i-1]==1)
                one++;
            else
                others++;
        }
        if(one==(n-1))
            cout<<"YES\n";
        else if(two<=2 and three==0 and others==0)
            cout<<"YES\n";
        else if(three==1 and two==0 and others==0)
            cout<<"YES\n";
        else
            cout<<"NO\n";

    }
    return 0;
}
