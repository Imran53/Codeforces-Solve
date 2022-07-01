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
        int c=s.size()-1;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='>' or s[n-i-1]=='<')
                c=min(i,c);
        }
        cout<<c<<endl;
    }
    return 0;
}
