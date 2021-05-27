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

        string s;
        cin>>s;

        int a=0,b=0,c=0;

        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
                a++;
            else
            {
                if(a>b)
                    b++;
                else
                    c++;
            }

        }

        cout<<c<<endl;
    }

    exit(0);
}
