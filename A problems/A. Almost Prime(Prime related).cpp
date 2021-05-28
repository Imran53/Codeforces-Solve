#include<bits/stdc++.h>
using namespace std;
bool isPrime(int num)
{
    bool flag=true;
    for(int i=2;i<=num/2;i++)
    {
        if(num%i==0)
        {
            flag=false;
            break;
        }
    }
    return flag;
}

int main()
{
    int n;
    cin>>n;
    int ans=0;

    for(int i=6;i<=n;i++)
    {
        int c=0;
        for(int j=2;j<=i;j++)
        {
            if(i%j==0 and isPrime(j))
            {
                c++;
            }
        }
        if(c==2)
            ans++;
    }

    cout<<ans;
    return 0;
}
