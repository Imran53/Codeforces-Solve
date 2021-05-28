#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    if(k==0)
    {
        cout<<s;
        return 0;
    }
    else
    {
        if(s.size()==1)
        {
            cout<<0;
            return 0;
        }
        if(s[0]!='1')
        {
            s[0]='1';
            k--;
        }
        for(int i=1;i<n and k>0;i++)
        {
            if(s[i]!='0')
            {
                s[i]='0';
                k--;
            }
        }

        cout<<s;

    }


    return 0;
}
