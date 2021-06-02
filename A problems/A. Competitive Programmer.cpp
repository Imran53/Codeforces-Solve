#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        string s;
        cin>>s;
        int sum=0,e=0,z=0;
        for(int i=0;i<s.size();i++)
        {
          sum+=s[i]-'0';
          if(s[i]=='0')
            z++;
          if((s[i]-'0')%2==0)
            e++;
        }

        if(sum%3==0 and e>=2 and z>=1)
            cout<<"red\n";
        else
            cout<<"cyan\n";
    }

    return 0;
}
