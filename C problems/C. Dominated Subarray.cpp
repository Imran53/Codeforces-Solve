#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    read:
    while(t--)
    {
     int n;
     cin>>n;
     int a,ans=INT_MAX;
     vector<int>v(n+1);

     for(int i=1;i<=n;i++)
     {
         cin>>a;
         if(v[a]==0)
            v[a]=i;
         else
         {
             ans=min(ans,i-v[a]+1);
             v[a]=i;
         }
     }

     if(ans==INT_MAX)
        cout<<-1<<endl;
     else
        cout<<ans<<endl;



    }
    return 0;

}
