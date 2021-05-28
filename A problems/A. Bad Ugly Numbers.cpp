#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    read:
    while(t--)
    {
        int n;
        cin>>n;
        if(n==1)
        {
            cout<<-1<<endl;
            goto read;
        }
        else
            cout<<string(1,'2')<<string(n-1,'3')<<endl;

    }

    return 0;
}
