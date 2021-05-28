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
        int a[n],cnt0=0,cnt1=0,cnt2=0;

        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]%3==0)
                cnt0++;
            else if(a[i]%3==1)
                cnt1++;
            else
                cnt2++;
        }

        if(cnt1==cnt2)
            cnt0+=cnt1;
        else if(cnt1>cnt2)
            cnt0+=(cnt1-cnt2)/3+cnt2;
        else
            cnt0+=(cnt2-cnt1)/3+cnt1;

        cout<<cnt0<<endl;

    }

    return 0;
}
