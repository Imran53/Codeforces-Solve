#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    cin>>k;
    string s="aeiou";
    bool ok=0;
    int n,m;

    for(int i=1;i<=k;i++)
    {
        if(k%i==0 and i>=5 and k/i>=5)
        {
            n=i;
            m=k/i;
            ok=1;
        }
    }

    if(ok==0)
    {
        cout<<-1<<endl;
    }

    else
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cout<<s[(i+j)%5];
            }
        }
    }

    return 0;
}
