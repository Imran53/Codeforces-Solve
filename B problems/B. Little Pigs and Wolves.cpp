#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    char c[n+1][m+1 ];

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin>>c[i][j];
        }
    }
    int cnt=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(c[i][j]=='P')
            {
                if(c[i][j-1]=='W')
                {
                    cnt++;
                    c[i][j-1]='E';
                }
                if(c[i][j+1]=='W')
                {
                    cnt++;
                    c[i][j+1]='E';
                }
                if(c[i-1][j]=='W')
                {
                    cnt++;
                    c[i-1][j]=='E';
                }
                if(c[i+1][j]=='W')
                {
                    cnt++;
                    c[i+1][j]='E';
                }
            }
        }

    }
    cout<<cnt<<endl;
    return 0;
}
