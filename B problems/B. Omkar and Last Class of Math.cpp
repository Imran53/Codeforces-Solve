#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    while(n--)
    {
        int t;
        cin>>t;
        int first=1,last=t-1,limit=sqrt(t);

        for(int i=2;i<=limit;i++)
        {
            if(t%i==0)
            {
                first=t/i;
                last=t-first;
                break;
            }
        }

        cout<<first<<" "<<last<<endl;
    }

    return 0;
}
