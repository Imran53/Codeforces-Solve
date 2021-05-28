#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,s=0;
        cin>>x;
        for(int i=1;;i++)
        {
            s+=i;
            if(s-1==x)
            {
                cout<<i+1<<endl;
                break;
            }
            if(s>x or s==x)
            {
                cout<<i<<endl;
                break;
            }
        }
    }
    return 0;
}
