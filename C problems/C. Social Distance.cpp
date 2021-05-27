#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,ans=0,cnt=0;
        cin>>n>>k;
        string s;
        cin>>s;

        for(int i=0; i<n; i++)
        {
            if(i==0)
            {
                if(s[i]=='0')
                {
                    ans++;
                }
                else
                {
                    cnt=0;
                }

            }

            else if(s[i]=='0' and cnt==k)
            {
                ans++;
                cnt=0;
            }
            else if(s[i]=='0')
            {
                cnt++;
            }
            else if(s[i]=='1')
            {
                if(cnt<k)
                {
                    ans--;
                    cnt=0;
                }
                else
                {
                     cnt=0;
                }


            }
        }
        cout<<ans<<endl;
    }

    return 0;
}
