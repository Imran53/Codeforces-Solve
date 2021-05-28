#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[6][6],c,r;

    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            cin>>a[i][j];

            if(a[i][j]==1)
            {
                r=i;
                c=j;
            }
        }
    }

    cout<<abs(r-3)+abs(c-3)<<endl;

    exit(0);
}
