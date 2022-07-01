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
        int cnt=0;
        while(n>=2)
        {
            int a=2,b=2;
            while(a+b+3<=n)
            {
                a+=3;
                b+=a;
            }
            cnt++;
            n-=b;
        }
        cout<<cnt<<endl;
    }

    return 0;
}
