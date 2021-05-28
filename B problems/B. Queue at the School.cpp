#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    string s;
    cin>>s;

    while(m--)
    {
        for(int i=0;i<n;i++)
        {
            if(s[i]=='B' and s[i+1]=='G')
            {
                s[i]='G';
                s[i+1]='B';
                i++;
            }
        }
    }

    cout<<s;
    exit(0);
}
