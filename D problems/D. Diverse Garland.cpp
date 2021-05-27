#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt=0;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0; i<n-1; i++)
    {
        if(s[i]==s[i+1] and i!=n-1)
        {
            if(s[i]!='R' and s[i+2]!='R')
            {
                s[i+1]='R';
                i++;
                cnt++;
            }
            else if(s[i]!='G' and s[i+2]!='G')
            {
                s[i+1]='G';
                i++;
                cnt++;
            }
            else if(s[i]!='B' and s[i+2]!='B')
            {
                s[i+1]='B';
                i++;
                cnt++;
            }
        }
        else if(s[i]==s[i+1] and i==n-1)
        {
            if(s[i+1]!='R')
                s[i+1]='R',cnt++;
            else if(s[i+1]!='G')
                s[i+1]='G',cnt++;
            else if(s[i+1]!='B')
                s[i+1]='B',cnt++;

        }
    }
    cout<<cnt<<endl<<s<<endl;
    return 0;
}
