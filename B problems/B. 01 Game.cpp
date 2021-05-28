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
        int c1=0,c2=0;

        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='0')
                c1++;

            else
                c2++;
        }

        if(min(c1,c2)%2==1)

            cout<<"DA\n";

        else
            cout<<"NET\n";
    }

    exit(0);
}
