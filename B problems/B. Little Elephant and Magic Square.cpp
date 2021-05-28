#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r=3,c=3;
    int a[r][c];

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>a[i][j];
        }
    }

    int m=a[0][1]+a[0][2],n=a[1][0]+a[1][2],o=a[2][0]+a[2][1],x,y,z;

    for(int i=0;;i++)
    {
        x=i;
        y=(m+x)-n;
        z=(m+x)-o;

        if(x+y+z==m+x)
        {
            a[0][0]=x;
            a[1][1]=y;
            a[2][2]=z;

            for(int i=0;i<r;i++)
            {
                for(int j=0;j<c;j++)
                {
                    cout<<a[i][j]<<" ";

                }
                cout<<endl;
            }
            return 0;
        }
    }
    return 0;
}
