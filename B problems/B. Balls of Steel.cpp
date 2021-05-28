#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    read:
    while(t--)
    {
        int n,k,diff;
        cin>>n>>k;
        pair<int,int>a[n];

        for(int i=0; i<n; i++)
            cin>>a[i].first>>a[i].second;
        for(int i=0; i<n; i++)
        {
            int sum=0;
            for(int j=0; j<n; j++)
            {
                if(abs(a[i].first-a[j].first)+abs(a[i].second-a[j].second)<=k)
                    sum++;
            }
            if(sum==n)
            {
                cout<<1<<endl;
                goto read;
            }
        }
        cout<<-1<<endl;

    }
    return 0;
}
