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
       bool ok=true;
       vector<int>v(n);

       for(int i=0;i<n;i++)
       {
           cin>>v[i];
       }

       for(int i=1;i<n;i++)
       {
           if(abs(v[i]-v[i-1])!=1)
           {
               if(abs(v[i]-v[i-1])!=n-1)
               {
                   ok=false;
               }
           }

      }

       if(ok)
       {
           cout<<"YES\n";
       }
       else
       {
           cout<<"NO\n";
       }

   }

   return 0;

}
