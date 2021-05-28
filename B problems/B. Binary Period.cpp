#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;

        if(s==string(s.size(),s[0]))
           cout<<s;
        else
        {
            for(int i=0;i<s.size();i++)
                cout<<"01";
        }
        cout<<endl;
    }
    return 0;
}
