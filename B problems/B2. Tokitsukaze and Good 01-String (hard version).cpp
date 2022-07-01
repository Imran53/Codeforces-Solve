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
        int cnt=0;
        string sub;
        for(int i=0;i<n;i+=2)
        {
            if(s[i]!=s[i+1])
                cnt++;
            else
                sub+=s[i];
        }
        int scnt=0;
        for(int i=1;i<sub.size();i++)
        {
            if(sub[i]!=sub[i-1])
                scnt++;
        }
        scnt++;
        cout<<cnt<<" "<<scnt<<endl;
    }

    return 0;
}
