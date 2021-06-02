#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,t;
    cin>>s>>t;
    int cnt=0;

    for(int i=0;i<=0;i++)
    {
        for(int j=0;j<=t.size();j++)
        {
            if(s[i]==t[j])
            {
                cnt++;
                i=i+1;
              //  j=j+1;

            }

            else
            {
                continue;
            }
        }
    }

    cout<<cnt+1<<endl;
    return 0;
}
