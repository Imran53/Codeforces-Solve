#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=0,cc=0,r;
    cin>>n;
    string s;
    cin>>s;

    for(int i=0;i<n;i++)
    {
        if(i%2==0 and s[i]=='r')
            c++;
        else
            if(i%2==1 and s[i]=='b')
            cc++;
    }

    r=max(c,cc);
    c=cc=0;

    for(int i=0;i<n;i++)
    {
        if(i%2==0 and s[i]=='b')
            c++;
        else
             if(i%2==1 and s[i]=='r')
            cc++;
    }

    cout<<min(r,max(c,cc))<<endl;
    return 0;
}
