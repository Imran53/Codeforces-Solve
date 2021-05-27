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
         string a="",b="";
         bool ok=0;

        for(int i=0;i<n;i++)
        {
            if(s[i]=='0')
            {
                a+='0';
                b+='0';
            }
            else if(s[i]=='1')
            {
                if(ok==0)
                {
                    a+='1';
                    b+='0';
                    ok=1;
                }
                else
                {
                    a+='0';
                    b+='1';
                }
            }
            else
            {
                if(ok==0)
                {
                    a+='1';
                    b+='1';

                }

                else
                {
                    a+='0';
                    b+='2';
                }
            }


    }
    cout<<a<<endl<<b<<endl;
    }

    return 0;
}
