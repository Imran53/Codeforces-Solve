#include<bits/stdc++.h>
using namespace std;
void ami()
{
        int n,a,b;
        cin>>n>>a>>b;
        if(abs(a-b)>1)
        {
            cout<<-1<<endl;
            return;
        }
        if(a+b+2>n)
        {
            cout<<-1<<endl;
            return;
        }
        if(a==b)
        {
            for(int i=0;i<a;i++)
            cout<<i+1<<" "<<n-i<<" ";

            for(int i=0;i<n-2*a;i++)
                cout<<a+i+1<<" ";

            cout<<endl;

        }

        else if(a==(b+1))
        {
            for(int i=0;i<a;i++)
                cout<<i+1<<" "<<n-i<<" ";

            for(int i=0;i<n-a*2;i++)
                cout<<n-i-a<<" ";
            cout<<endl;
        }

        else
        {
            for(int i=0;i<b;i++)
                cout<<n-i<<" "<<i+1<<" ";

            for(int i=0;i<n-b*2;i++)
                cout<<b+i+1<<" ";

            cout<<endl;
        }


}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ami();
    }
    return 0;
}
