#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,k;
        cin>>a>>k;
        while(k>3)
        {
            cout<<1<<" ";
            k--;
            a--;
        }
        if(a%4==0)
        {
            cout<<a/4<<" "<<a/4<<" "<<a/2<<endl;
        }

        else if(a%2==0)
        {
            cout<<a/2-1<<" "<<a/2-1<<" "<<2<<endl;
        }
        else
        {
            cout<<a/2<<" "<<a/2<<" "<<1<<endl;
        }
    }
    return 0;
}
