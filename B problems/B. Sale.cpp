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
        int n,cnt=0;
        double t;
        cin>>n>>t;
        int a;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            if(a<t/2)
                cout<<0<<" ";
            else if(a>t/2)
                cout<<1<<" ";
            else{
                cnt++;
                cout<<cnt%2<<" ";
            }
        }

        cout<<endl;
    }


    return 0;
}
