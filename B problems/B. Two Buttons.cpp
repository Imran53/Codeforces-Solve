#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int r=0;
    if(n>=m)
    {
        cout<<n-m;
        return 0;
    }
    else
    {
        while(m!=n)
        {
            if(m%2==0 and m>n)
            {
                r++;
                m/=2;
            }
            else
            {
                m++;
                r++;
            }
        }
        cout<<r<<endl;
    }

    return 0;
}
