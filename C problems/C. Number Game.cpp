#include<bits/stdc++.h>
using namespace std;
bool check(int nn)
{
    if(nn<2)
        return false;
    for(int i=2;i*i<=nn;i++)
    {
        if(nn%i==0)
            return false;
    }
    return true;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n==2)
        {
             cout<<"Ashishgup\n";
             continue;
        }

        int m=n;
        while(m%2==0)
            m/=2;
        if(m==1)
        {
            cout<<"FastestFinger\n";
            continue;
        }

        if(n%2==1)
        {
            cout<<"Ashishgup\n";
            continue;
        }

        m=n/2;


        if(check(m)==true)
            cout<<"FastestFinger\n";
        else
            cout<<"Ashishgup\n";
    }
    return 0;
}
