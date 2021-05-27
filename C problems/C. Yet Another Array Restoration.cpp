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
        int a,b,k=0;
        cin>>a>>b;
        for(int i=1;i<=50;i++)
        {
            if((b-a)%i==0 and (b-a)/i<n)
            {
                k=i;
                break;
            }
        }

        for(int i=a;i<=b;i+=k)
        {
            cout<<i<<" ";
            n--;
        }
        for(int i=a-k;i>=1 and n>0;i-=k)
        {
            cout<<i<<" ";
            n--;
        }
        for(int i=b+k;n>0;i+=k)
        {
            cout<<i<<" ";
            n--;
        }
        cout<<endl;
    }
    return 0;
}
