#include<bits/stdc++.h>
using namespace std;
void solve()
{

        int n;
        cin>>n;
        vector<int>o,e;

        for(int i=0; i<2*n; i++)
        {
            int a;
            cin>>a;
            if(a%2)
                o.push_back(i+1);
            else
                e.push_back(i+1);

        }
        int cnt=0;


        for(int i=0; i+1<o.size(); i+=2)
        {
            if(cnt<n-1)
            {
                cout<<o[i]<<" "<<o[i+1]<<endl;
                cnt++;
            }

        }


        for(int i=0; i+1<e.size(); i+=2)
        {
            if(cnt<n-1)
            {
                cout<<e[i]<<" "<<e[i+1]<<endl;
                cnt++;
            }

        }


}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}
