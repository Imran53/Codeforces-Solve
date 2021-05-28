#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,cnt=1;
    cin>>a>>b;
    for(long long i=a+1;i<=b;i++)
    {
        if(i%10==0)
        {
            cnt=0;
            break;
        }

        cnt=(cnt*i%10)%10;
    }

    cout<<cnt<<endl;
    return 0;
}
