#include<bits/stdc++.h>
using namespace std;
int main()
{
   string s;
   cin>>s;
   int m,total[100001],cnt=0;
   cin>>m;
   for(int i=1;i<s.size();i++ )
   {
       if(s[i]==s[i-1])
        cnt++;
       total[i]=cnt;
   }

   while(m--)
   {

       int l,r;
       cin>>l>>r;
       cout<<total[r-1]-total[l-1]<<endl;
   }

    return 0;
}
