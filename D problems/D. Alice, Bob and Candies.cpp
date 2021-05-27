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
        {
            cin>>a[i];
        }
        int l=0,r=n-1,cnt=0,aa=0,b=0,m=0,total=0;
        while(l<=r)
        {
            cnt=0;
            while(l<=r and cnt<=total)
            {
                cnt+=a[l];
                l++;
            }
            m++;
            total=cnt;
            aa+=cnt;
            cnt=0;
            while(l<=r and cnt<=total)
            {
                cnt+=a[r];
                r--;

            }
            total=cnt;
            b+=cnt;
            if(cnt!=0)
                m++;
        }
        cout<<m<<" "<<aa<<" "<<b<<endl;
    }
    return 0;
}
