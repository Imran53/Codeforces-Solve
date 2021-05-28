#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int cnt=0;

    for(int i=0;i<s.size()-2;i++)
    {

      if(s[i]=='x' and s[i+1]=='x' and s[i+2]=='x')
      {
          cnt++;
      }

    }

      cout<<cnt<<endl;
      exit(0);


}
