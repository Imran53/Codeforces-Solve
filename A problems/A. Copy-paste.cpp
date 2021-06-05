#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,cnt=0;
        cin>>n>>k;
        vector<int>v(n);
        for(int i=0;i<n;i++)
            cin>>v[i];
        sort(v.begin(),v.end());

        for(int i=1;i<n;i++)
        {
            if(v[i]<7)
                cnt+=(k-v[i])/v[0];
            else
                break;
        }

        cout<<cnt<<endl;
    }

    return 0;
}
