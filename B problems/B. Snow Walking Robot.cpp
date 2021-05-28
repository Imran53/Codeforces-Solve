#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    read:
    while(t--)
    {
        string s;
        cin>>s;
        int l=0,r=0,d=0,u=0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='L')
                l++;
            else if(s[i]=='R')
                r++;
            else if(s[i]=='U')
                u++;
            else if(s[i]=='D')
                d++;
        }
        int lr=min(l,r);
        int ud=min(u,d);

        if(lr==0 and ud==0)
        {
            cout<<0<<endl;
            goto read;
        }
        else
        {
            if(lr>0 and ud==0)
            {
                cout<<2<<endl<<"LR\n";
                goto read;

            }
            if(lr==0 and ud>0)
            {
                cout<<2<<endl<<"UD\n";
                goto read;

            }
        }

        string ss="";
        for(int i=0; i<lr; i++)
            ss+='R';
                for(int i=0; i<ud; i++)
                    ss+='D';
                        for(int i=0; i<lr; i++)
                            ss+='L';
                                for(int i=0; i<ud; i++)
                                    ss+='Um';

                                        cout<<ss.size()<<endl;
        cout<<ss<<endl;



    }
    return 0;
}
