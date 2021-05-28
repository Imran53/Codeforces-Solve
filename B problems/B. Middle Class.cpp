#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
       // long double k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n,greater<int>());
        long long sum=0,cnt=0;

        for(int i=0;i<n;i++)
        {
            sum+=a[i];
            if(sum/(i+1)>=k)
                cnt++;
            else
                break;

        }

        cout<<cnt<<endl;

    }

    return 0;
}
