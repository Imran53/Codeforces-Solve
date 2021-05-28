#include<bits/stdc++.h>
using namespace std;
int main()
{
      int n,r,i=1,s=0;
      cin>>n;

      while(n>0)
      {
          r=n%10;
          if(r==4)
          {
              s+=i;
          }
          else
            s+=2*i;

          n/=10;
          i*=2;
      }

      cout<<s;
      return 0;
}
