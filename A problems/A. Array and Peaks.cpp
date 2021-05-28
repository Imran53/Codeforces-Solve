#include<bits/stdc++.h>
using namespace std;
void solve(){

     int n,k;
     cin>>n>>k;
     if(k*2>=n)
     {
         cout<<-1<<endl;
     }
     else
     {
         int a=1,b=n;
         for(int i=1;i<=k;i++)
         {
             cout<<a<<" "<<b<<" ";
             a++;
             b--;
         }
         for(int i=a;i<=b;i++)
         {
             cout<<i<<" ";
         }
         cout<<endl;
     }

}
int main()
{

    int t;
    cin>>t;
    while(t--) solve();


}
