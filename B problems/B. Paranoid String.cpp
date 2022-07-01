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
        long long nn=n;

        for(int i=1;i<n;i++)
        {
            if(s[i]!=s[i-1])
                nn+=i;
        }

        cout<<nn<<endl;
    }

    return 0;
}
