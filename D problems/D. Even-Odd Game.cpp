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
        long long al=0,b=0;
        vector<long long>a(n);
        for(int i=0;i<n;i++)
            cin>>a[i];

        sort(a.begin(),a.end(),greater<long long>());

        for(int i=0;i<n;i++)
        {
            if(i%2==0 and a[i]%2==0)
            {
                    al+=a[i];
            }
            else if(i%2==1 and a[i]%2==1)
            {
                    b+=a[i];
            }
        }

        if(al>b)
            cout<<"Alice\n";
        else if(al<b)
            cout<<"Bob\n";
        else
            cout<<"Tie\n";
    }

    return 0;
}
