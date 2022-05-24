#include<bits/stdc++.h>
using namespace std;
void solve()
{

        int a,b;
        cin>>a>>b;
        string s;
        cin>>s;
        int i=0,j=s.size()-1;

        while(i<=j)
        {
            if(s[i]!=s[j])
            {
                if(s[i]!='?' and s[j]!='?')
                {
                    cout<<-1<<endl;
                    return;
                }
                else
                {
                    if(s[i]=='0')
                    {
                        s[j]='0';
                        a-=2;
                    }
                    else if(s[i]=='1')
                    {
                        s[j]='1';
                        b-=2;
                    }
                    else if(s[j]=='0')
                    {
                        s[i]='0';
                        a-=2;
                    }
                    else if(s[j]=='1')
                    {
                        s[i]='1';
                        b-=2;
                    }
                }
            }
            else{
                int d=2;
                if(i==j)
                    d=1;
                if(s[i]=='0')
                    a-=d;
                else if(s[i]=='1')
                    b-=d;

            }
            i++;
            j--;
        }

        i=0,j=s.length()-1;

        while(i<=j)
        {
           if(s[i]=='?' and s[j]=='?')
           {
               int d=2;
               if(i==j)
                d=1;
               if(a-d>=0)
               {
                   s[i]='0';
                   s[j]='0';
                   a-=d;
               }
               else if(b-d>=0)
               {
                   s[i]='1';
                   s[j]='1';
                   b-=d;
               }
               else
               {
                   cout<<-1<<endl;
                   return;
               }
           }
           i++;
           j--;

        }
        if(a==0 and b==0)
            cout<<s<<endl;
        else
            cout<<-1<<endl;
    }
    int main()
    {
        int t;
        cin>>t;
        while(t--)
        {
            solve();
        }
        return 0;
    }

