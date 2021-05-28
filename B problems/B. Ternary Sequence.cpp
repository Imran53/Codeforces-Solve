#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x0,x1,x2,y0,y1,y2,sum=0;
        cin>>x0>>x1>>x2>>y0>>y1>>y2;
        if(x2>0 and y1>0)
        {
            sum=min(x2,y1)*2;
            if(x2>=y1)
            {
                x2-=y1;
                y1=0;
            }
            else
            {
                y1-=x2;
                x2=0;
            }
        }
        if(y2>=(x0+x2))
        {
            y2-=(x0+x2);
            if(y2>0)
                sum-=(y2*2);
        }
        cout<<sum<<endl;
    }
    return 0;
}
