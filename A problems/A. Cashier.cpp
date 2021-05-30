#include<bits/stdc++.h>
using namespace std;
int main(){

   int n,l,a;
   cin>>n>>l>>a;
   int p,q,sum=0,pos=0;
   for(int i=0;i<n;i++)
   {
       cin>>p>>q;
       sum+=(p-pos)/a;
       pos=p+q;
   }
   cout<<sum+(l-pos)/a<<endl;
   return 0;
}
