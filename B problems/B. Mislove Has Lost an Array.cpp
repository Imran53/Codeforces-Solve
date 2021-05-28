#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long n,l,r,mn=0,mx=0;
   cin>>n>>l>>r;

   for(int i=0;i<n;i++)
   {
       if(i<l)
        mn+=pow(2,i);
       else
        mn++;
   }

   for(int i=0;i<n;i++)
   {
       if(i<r)
        mx+=pow(2,i);
       else
        mx+=pow(2,r-1);
   }

   cout<<mn<<" "<<mx<<endl;


   return 0;
}
