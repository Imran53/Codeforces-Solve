#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin>>t;
    while(t--)
    {
        int n,maxx=0,cnt=0,pp=0;
        cin>>n;
        string s;
        cin>>s;
        s.push_back('A');

        for(int i=0;i<s.size()+1;i++)
        {
            if(s[i]=='A')
            {
                maxx=max(maxx,pp);
                cnt++;
                pp=0;

            }

            else if(cnt>0)
               pp++;

        }

        cout<<maxx<<endl;
    }
    return 0;

}
