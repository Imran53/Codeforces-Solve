#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b;
        cin>>a>>b;
        long long n=9,cnt=0;
        while(n<=b)
        {
            cnt++;
            n=n*10+9;
        }
        cout<<a*cnt<<endl;
    }

    return 0;
}
