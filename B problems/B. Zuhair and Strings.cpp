#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int mx=0;
    for(char c='a';c<='z';c++)
    {
        int level=0;
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            if(c==s[i])
            {
                cnt++;
                if(cnt==k)
                {
                    level++;
                    cnt=0;
                }
            }
            else
                cnt=0;

        }
        mx=max(mx,level);
    }
    cout<<mx<<endl;
    return 0;

}
