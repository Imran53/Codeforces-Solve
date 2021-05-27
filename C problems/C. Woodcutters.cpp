#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt=2;
    cin>>n;
    pair<int,int>a[n];
    for(int i=0;i<n;i++)
        cin>>a[i].first>>a[i].second;
    if(n==1)
    {
        cout<<n<<endl;
        return 0;
    }
    for(int i=1;i<n-1;i++)
    {
        if((a[i].first-a[i].second)>a[i-1].first)
        {
            cnt++;
        }
        else if((a[i].first+a[i].second)<a[i+1].first)
        {
            cnt++;
            a[i].first+=a[i].second;
        }
    }
    cout<<cnt<<endl;
    return 0;
}
