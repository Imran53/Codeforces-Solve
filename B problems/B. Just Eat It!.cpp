#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,b,c,cnt=0;
        cin>>n>>a>>b>>c;
        char s[103];
        cin>>s;
        char ss[103]="";

        for(int i=0;i<n;i++)
        {
            if(s[i]=='R')
            {
                if(b>0)
                {
                    ss[i]='P';
                    b--;
                    cnt++;
                }
            }

               if(s[i]=='P')
            {
                if(c>0)
                {
                   ss[i]='S';
                    c--;
                    cnt++;
                }
            }
            if(s[i]=='S')
            {
                if(a>0)
                {
                   ss[i]='R';
                    a--;
                    cnt++;
                }
            }
        }

        if(cnt*2<n)
        {
            cout<<"NO\n";
        }
        else
        {
            for(int i=0;i<n;i++)
            {
                if(ss[i]==0)
                {
                    if(a>0)
                    {
                        ss[i]='R';
                        a--;
                    }
                    else if(b>0)
                    {
                       ss[i]='P';
                        b--;
                    }
                    else
                    {
                        ss[i]='S';
                        c--;
                    }
                }
            }
            cout<<"YES\n"<<ss<<endl;
        }

    }

    return 0;
}
