#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt=0;
    cin>>n;
    for(int i=1;i<n;i++)
    {
        for(int j=1;j<n;j++)
        {
            int c=n-(i*j);
            if(c<=0)
                break;
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}
