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
        int a,result=0,z=0;
        bool ok=0;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            if(a==1)
            {
                ok=1;
                result+=z;
                z=0;
            }

            else if(ok==1)
                z++;

        }

        cout<<result<<endl;
    }
    return 0;
}
