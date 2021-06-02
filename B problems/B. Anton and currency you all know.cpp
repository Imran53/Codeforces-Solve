#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int cnt=-1,n=s.size();
    for(int i=0;i<n-1;i++)
    {
        if((s[i]-'0')%2==0)
        {
            if(s[i]<s[n-1])
            {
               cnt=i;
               break;
            }
            else
            cnt=i;
        }



    }
    if(cnt==-1)
        cout<<-1;
    else
        {
            swap(s[cnt],s[n-1]);
            cout<<s;
        }
    return 0;

}
