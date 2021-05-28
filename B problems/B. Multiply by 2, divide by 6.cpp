#include<bits/stdc++.h>
using namespace std;
int main()
{
    //1374B
    int t;
    cin>>t;
    while(t--)
    {
        int n,cnt2=0,cnt3=0;
        cin>>n;

        while(n%2==0)
        {
            n/=2;
            cnt2++;
        }

        while(n%3==0)
        {
            n/=3;
            cnt3++;
        }

        if(n==1 and cnt2<=cnt3)
            cout<<cnt3-cnt2+cnt3<<endl;
        else
            cout<<-1<<endl;
    }

    return 0;
}
