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
        string s;
        cin>>s;
        int mx=1000000;
        for(char c='a'; c<='z'; c++)
        {
            int cnt=0;
            int i=0,j=n-1;
            while(i<=j)
            {
                if(s[i]==s[j])
                {

                    i++;
                    j--;
                }
                else
                {
                    if(s[i]==c)
                    {
                        cnt++;
                        i++;
                    }
                    else if(s[j]==c)
                    {
                        cnt++;
                        j--;
                    }
                    else
                    {
                        cnt=n+1;
                        break;
                    }
                }
            }
            mx=min(mx,cnt);
        }

        if(mx==n+1)
            cout<<-1<<endl;
        else
            cout<<mx<<endl;

    }

    return 0;
}
