#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a,b;
    int s[100001];
    s[0]=0;
    for(int i=1;i<=n;i++)
    {
        cin>>a>>b;
        s[i]=s[i-1]+(a*b);
    }

    int x,song=1;
    for(int i=0;i<m;i++)
    {
        cin>>x;
        while(x>s[song])
        {
            song+=1;
        }

        cout<<song<<endl;

    }

    return 0;
}
