#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,c0,c1,h,cnt=0;
        cin>>n>>c0>>c1>>h;
        string s;
        cin>>s;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='0')
                cnt+=min(c0,c1+h);
            else
                cnt+=min(c1,c0+h);

        }

        cout<<cnt<<endl;

    }

    return 0;
}
