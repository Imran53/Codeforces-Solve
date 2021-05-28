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
        int a,o=0,e=0;

        for(int i=0;i<n;i++)
        {
            cin>>a;
            if(i%2!=a%2)
            {
                if(i%2==0)
                    e++;
                else
                    o++;
            }

        }

        if(e!=o)
            cout<<-1<<endl;
        else
            cout<<e<<endl;
    }

    return 0;
}
