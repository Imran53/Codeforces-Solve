#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int l=s.size();
    if(l%2==0)
    {
        int e=0;
        for(int i=0;i<l;i++)
        {
            cout<<s[i];
            e++;
            if(e%2==0 and e!=l)
            {
                cout<<"-";
            }
        }
    }
    else
    {
        int o=0;
        for(int i=0;i<n;i++)
        {
            cout<<s[i];
            o++;
            if(o==3 and o!=l)
                cout<<"-";
            else if(o!=1 and o%2==1 and o!=l)
                cout<<"-";
        }
    }
    return 0;
}
